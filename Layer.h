//
// Created by falcon on 3/19/18.
//

#ifndef NEURAL_NETS_LAYER_H
#define NEURAL_NETS_LAYER_H


#include "Neuron.h"

class Layer {
private:
    const int size = 3;
    Neuron* neuronList[size];
public:
    int getSize();

};


#endif //NEURAL_NETS_LAYER_H
