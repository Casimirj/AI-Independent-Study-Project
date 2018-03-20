//
// Created by falcon on 3/19/18.
//

#ifndef NEURAL_NETS_NET_H
#define NEURAL_NETS_NET_H


#include "Layer.h"

class Net {
private:
    int tick = 0;

    const static int numberOfLayers = 4;
    Layer* layers[numberOfLayers];

public:
    Net();
    void getOutputVectors();//zhu li, do the thing!
    void doTick();

    void getInputVectors();


};


#endif //NEURAL_NETS_NET_H
