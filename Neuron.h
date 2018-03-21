//
// Created by falcon on 3/19/18.
//

#ifndef NEURAL_NETS_NEURON_H
#define NEURAL_NETS_NEURON_H

#include "Connection_List.h"

class Neuron {
private:
    double activation = 0;

    double inputSignal;
    double newInputSum = 0;

    Connection_List* connections = new Connection_List();




public:
    Neuron();

    double determineActivation();
    void sendOutputSignal();
    void finalizeInputSum();

    void addToInputSum(double input);
    void addConnections(Connection_List* input);


#endif //NEURAL_NETS_NEURON_H
