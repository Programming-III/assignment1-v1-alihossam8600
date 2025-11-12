#include <iostream>
#include "Animal.h"
#include "Enclosure.h"
#include "Visitor.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include <string>
using namespace std;

Animal::Animal():name(""),age(0),isHungry(false){}
Animal::Animal(string n,int ag,bool hungry):name(n),age(ag),isHungry(hungry){}
Animal::~Animal(){}

void Animal::setname(string n){name=n;}
void Animal::setage(int ag){age=ag;}
void Animal::sethungry(bool hungry){isHungry=hungry;}
string Animal::getname(){return name;}
int Animal::getage(){return age;}
bool Animal:: gethungry(){return isHungry}

void Animal::display(){
    cout<<"name:"<<name<<" age:"<<age<<" is hungry:"<<isHungry<<endl;


}
void Animal::feed(){return isHungry;}

Mammal::Mammal():furColor(""){}
Mammal::Mammal(string n,int ag,bool hungry,string color):Animal(n,ag,hungry),furColor(color){}
Mammal::~Mammal(){}

void Mammal::setcolor(string c){furcolor=c;}
string Mammal::getcolor(){return furColor;}

Bird::Bird():wingSpan(0.0){}
Bird::Bird(string n,int ag,bool hungry,float span):Animal(n,ag,hungry),wingSpan(span){}
Bird::~Bird(){}

void Bird::setspan(string s){wingSpan=s}
float Bird::getspan(){return wingSpan}

Reptile::Reptile():isVenomous(false){}
Reptile::Reptile(string n,int ag,bool hungry,bool ven):Animal(n,ag,hungry),isVenomous(ven){}
Reptile::~Reptile(){}

void Reptile::setven(bool v){isVenomous=v}
bool Reptile::getven(){return isVenomous}

Enclosure::Enclosure():capacity(0),currentCount(0){}
Enclosure::Enclosure(int cap,int current):capacity(cap),currentCount(current){}
Enclosure::~Enclosure(){}

void Enclosure::displayAnimals(){
    for(int i=0,i<currentCount,i++)
    cout<<Animal[i].display()<<endl;

}
void Visitor::Visitor(string vname,int ticket):visitroName(vname),ticketsBought(ticket){}
void Visitor::Visitor():visitroName(""),ticketsBought(0){}
void Visitor::~visitor(){}

void Visitor::displayInfo(){
    cout<<"name"<<visitorName<<" tickets:"<<ticketsBought<<endl;


}




