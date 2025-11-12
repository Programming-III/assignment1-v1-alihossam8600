#ifndef VISITOR_H
#define VISITOR_H

class Visitor{
private:
    string visitorName;
    int ticketsBought;

public:
    Visitor();
    Visitor(string vname,int ticket);
    ~Visitor();

    void setvname(string name);
    void setticket(int ticket);
    string getvnam();
    int getticket();
    void displayInfo();



};



#endif
