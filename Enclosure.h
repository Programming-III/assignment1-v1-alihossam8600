#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include "Animal.h"
#include <iostream>

class Enclosure{
private:

    Animal* animal;
    int capacity;
    int currentCount;

public:
    Enclosure();
    Enclosure(int cap,int current);
    ~Enclosure();
    void setcap(int cap);
    void setcurrent(int current);
    int getcap();
    int getcurrent();
    void addAnimal(Animal* a);
    void displayAnimals();







};

#endif
