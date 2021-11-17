#include "StringedInstrument.h"

StringedInstrument::StringedInstrument(const std::string &name, int numberOfMajor, std::string *majorList, int numberOfStrings, char *stringList) :
    Instrument(name, numberOfMajor, majorList), numberOfStrings(numberOfStrings) {
    assignStringList(stringList);
}

void StringedInstrument::assignStringList(const char *ptr) {
    stringList = new char[numberOfStrings];

    for (int i = 0; i < numberOfStrings; i++) {
        stringList[i] = ptr[i];
    }
}

StringedInstrument::~StringedInstrument() {
    delete[] stringList;
}

StringedInstrument::StringedInstrument(const StringedInstrument &ref) :
    Instrument(ref.name, ref.numberOfMajor, ref.majorList), numberOfStrings(ref.numberOfStrings) {
    assignStringList(ref.stringList);
}

StringedInstrument &StringedInstrument::operator=(const StringedInstrument &ref) {
    if (&ref == this) return *this;

    Instrument::operator=(ref);

    numberOfStrings = ref.numberOfStrings;
    delete[] stringList;
    assignStringList(ref.stringList);

    return *this;
}

void StringedInstrument::print() const {
    Instrument::print();
    std::cout << "  Strings [" << numberOfStrings << "]:\n";
    std::cout << "    [ ";

    for (int i = 0; i < numberOfStrings; i++) {
        std::cout << stringList[i] << (i + 1 < numberOfStrings ? " ; " : " ");
    }

    std::cout << "]\n";
}

int StringedInstrument::getNumberOfStrings() const {
    return numberOfStrings;
}

char *StringedInstrument::getStringList() const {
    return stringList;
}

void StringedInstrument::setStringList(int numberOfString, const char *stringList) {
    delete[] this->stringList;
    this->numberOfStrings = numberOfString;
    assignStringList(stringList);
}
