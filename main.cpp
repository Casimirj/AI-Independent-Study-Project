#include <iostream>

#include "Neuron.h"
#include "Connection.h"
#include "Layer.h"



int main() {
    Neuron* neuron = new Neuron();
    Connection* connect = new Connection();
    Layer* layer = new Layer();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}