#include <iostream>
#include "StringedInstrument.h"

int main() {
    std::string majorList[] = {"C", "G","A","B","F#"};
    char stringListGuitar[] = {'E','A','D','G','B','E'};
    char stringListBass[] = {'E','A','D','G'};

    StringedInstrument guitar1("Gibson", 5, majorList, 6, stringListGuitar);
    guitar1.print();
    std::cout << std::endl;
    StringedInstrument guitar2 = guitar1;
    guitar2.print();
    std::cout << std::endl;

    guitar2.setStringList(4, stringListBass);
    guitar2.print();
    std::cout << std::endl;

    StringedInstrument guitar3;
    std::cout << std::endl << "guitar3";
    guitar3.print();
    std::cout << std::endl;
    guitar3 = guitar1;
    guitar3.setName("Fender");
    guitar3.print();
    std::cout << std::endl;

    return 0;

}
