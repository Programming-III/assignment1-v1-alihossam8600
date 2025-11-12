#ifndef REPTILE_H
#define REPTILE_H
#include "Animal.h"
#include <iostream>

class Reptile:public Animal{
private:
    bool isVenomous;

public:
    Reptile();
    Reptile(string n,int ag,bool hungry,bool ven);
    ~Reptile();

    void setven(bool v);
    bool getven();

};





#endif 
