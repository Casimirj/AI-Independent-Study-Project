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
void Layer::addConnectionLists(Connection_List* inputList) {
    /*This function is meant to create connections for all neurons in the layer
     * Connections should be to all neurons in next layer
    */

    for(int i = 0; i < size; i++){
        neuronList[i]->addConnections(inputList);
    }
}
Connection_List* Layer::createConnectionList(){
    /*
     * This function creates connections to all neurons in THIS layer
     * Most likely to be used by the previous layer
     */
    Connection_List* result = new Connection_List();

    for(int i = 0; i < size; i++){
        Connection* toAdd = new Connection(neuronList[i], 1);
        result->addConnection(toAdd);
    }
    return result;
}
v

Layer::Layer() {

}

