#pragma once
#include "Instrument.h"

class StringedInstrument : public Instrument {
    private:
        int numberOfStrings;
        char *stringList;

        void assignStringList(const char *ptr);
    public:
        StringedInstrument(const std::string &name = "", int numberOfMajor = 0, std::string *majorList = {}, int numberOfStrings = 0,
                           char *stringList = {});
        ~StringedInstrument();
        StringedInstrument(const StringedInstrument &ref);
        StringedInstrument& operator=(const StringedInstrument &ref);

        int getNumberOfStrings() const;
        char *getStringList() const;
        void setStringList(int numberOfString, const char *stringList);

        void print() const;
};



