//
// Created by falcon on 3/19/18.
//

#ifndef NEURAL_NETS_LAYER_H
#define NEURAL_NETS_LAYER_H


#include "Neuron.h"

class Layer {
private:
    const static int size = 3;
    Neuron* neuronList[size];
public:
    Layer();
    int getSize();

    void finalizeLayerInputs();
    void determineActivations();
    void sendOutputSignals();

    void addConnectionLists(Connection_List *inputList);
    Connection_List *createConnectionList();
};


#endif //NEURAL_NETS_LAYER_H
