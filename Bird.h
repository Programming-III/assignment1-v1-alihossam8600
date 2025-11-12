#ifndef BIRD_H
#define BIRD_H
#include "Animal.h"
#include <iostream>

class Bird:public Animal{
private:
    float wingSpan;

public:
    Bird();
    Bird(string n,int ag,bool hungry,float span);
    ~Bird();

    void setspan(float s);
    float getspan();



};




#endif
