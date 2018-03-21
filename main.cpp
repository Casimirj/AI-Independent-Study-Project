#include <iostream>

#include "Neuron.h"
#include "Connection.h"
#include "Layer.h"
#include "Connection_List.h"
#include "Net.h"



int main() {
    Neuron* neuron = new Neuron();
    Connection* connect = new Connection(neuron, 2);
    Layer* layer = new Layer(); //These are just so I can test the functions
    Connection_List* connectionlist = new Connection_List();
    Net* net = new Net();



    return 0;
}
