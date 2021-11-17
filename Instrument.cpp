#include "Instrument.h"

Instrument::Instrument(const std::string &name, int numberOfMajor, std::string *majorList) :
    name(name), numberOfMajor(numberOfMajor) {
    assignList(majorList);
}

Instrument::~Instrument() {
    delete[] this->majorList;
}

const std::string &Instrument::getName() const {
    return name;
}

void Instrument::setName(const std::string &name) {
    this->name = name;
}

int Instrument::getNumberOfMajor() const {
    return numberOfMajor;
}

std::string *Instrument::getMajorList() const {
    return majorList;
}

void Instrument::setMajorList(int numberOfMajor, const std::string *majorList) {
    delete[] this->majorList;
    this->numberOfMajor = numberOfMajor;
    assignList(majorList);
}

Instrument::Instrument(const Instrument &ref) : name(ref.name), numberOfMajor(ref.numberOfMajor) {
    assignList(ref.majorList);
}

void Instrument::assignList(const std::string *ptr) {
    this->majorList = new std::string[numberOfMajor];

    for (int i = 0; i < numberOfMajor; i++) {
        this->majorList[i] = ptr[i];
    }
}

Instrument &Instrument::operator=(const Instrument &ref) {
    if (&ref == this) return *this;

    name = ref.name;
    numberOfMajor = ref.numberOfMajor;
    delete[] majorList;
    assignList(ref.majorList);

    return *this;
}

void Instrument::print() const {
    std::cout << name << ":\n";
    std::cout << "  Majors [" << numberOfMajor << "]:\n";
    std::cout << "    [ ";

    for (int i = 0; i < numberOfMajor; i++) {
        std::cout << majorList[i] << (i + 1 < numberOfMajor ? " ; " : " ");
    }

    std::cout << "]\n";
}



