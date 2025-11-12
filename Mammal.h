#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animal.h"
#include <iostream>

class Mammal:public Animal{
private:
    string furColor;

public:
    Mammal();
    Mammal(string n,int ag,bool hungry,string color);
    ~Mammal();

    void setcolor(string color);
    string getcolor();


};



#endif


