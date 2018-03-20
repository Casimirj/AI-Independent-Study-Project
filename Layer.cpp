//
// Created by falcon on 3/19/18.
//

#include "Layer.h"





int Layer::getSize(){
    return size;
}

void Layer::sendOutputSignals() {
    for(int i = 0; i < size; i++){
        neuronList[i]->sendOutputSignal();
    }
}

void Layer::determineActivations() {
    for(int i = 0; i < size; i++){
        neuronList[i]->determineActivation();
    }
}

void Layer::finalizeLayerInputs() {
    for(int i = 0; i < size; i++){
        neuronList[i]->finalizeInputSum();
    }

}

Layer::Layer() {

}
