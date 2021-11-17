#pragma once
#include <string>
#include <iostream>

class Instrument {
    private:
        void assignList(const std::string *ptr);
    protected:
        std::string name;
        int numberOfMajor;
        std::string *majorList;
    public:
        Instrument(const std::string &name = "", int numberOfMajor = 0, std::string *majorList = {});
        ~Instrument();
        Instrument(const Instrument &ref);
        Instrument& operator=(const Instrument& ref);

        const std::string &getName() const;
        void setName(const std::string &name);
        int getNumberOfMajor() const;
        std::string *getMajorList() const;
        void setMajorList(int numberOfMajor, const std::string *majorList);

        void print() const;
};



