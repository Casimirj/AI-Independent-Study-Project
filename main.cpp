#include <iostream>

#include "Neuron.h"
#include "Connection.h"
#include "Layer.h"
#include "Connection_List.h"
#include "Net.h"



int main() {
    Neuron* neuron = new Neuron();
    Connection* connect = new Connection(2);
    Layer* layer = new Layer(); //These are just so I can test the functions
    Connection_List* connectionlist = new Connection_List();
    Net* net = new Net();



    connectionlist->addConnection(connect);
    Connection* otherthing = connectionlist->getConnection(connectionlist->getSize());
    if(otherthing == connect) std::cout << "We did it!!";
    std::cout << connectionlist->getSize();

    Connection* connection2 = new Connection(3);
    connectionlist->addConnection(connection2);
    Connection* otherthing2 = connectionlist->getConnection(connectionlist->getSize());
    if(otherthing2 == connection2) std::cout << "We did it!!";
    std::cout << connectionlist->getSize();



    return 0;
}