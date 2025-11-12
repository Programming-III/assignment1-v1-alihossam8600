#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal{
private:
    string name;
    int age;
    bool isHungry;
public:
    Animal();
    Animal(string n,int ag,bool hungry);
    ~Animal();

    
    
    void setname(string n);
    void setage(int ag);
    void sethungry(bool hungry);
    string getname();
    int getage();
    bool gethungry();

    void display();
    void feed();


};


#endif 
