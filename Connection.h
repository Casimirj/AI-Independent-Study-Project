//
// Created by falcon on 3/19/18.
//
#pragma once



#include "Neuron.h"

class Connection {

private:
    double weight = 1;
    Neuron* target;

    //Stuff for Linked List (connection_list)
    Connection* next = nullptr;


public:
    Connection(int input);
    void sendSignal(double input);


    double getWeight();


    //Stuff for Linked List (connection_list)
    Connection* getNext();
    void setNext(Connection* input);
    bool nextIsNull();
};


