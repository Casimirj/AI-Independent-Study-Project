//
// Created by falcon on 3/19/18.
//

#include "Net.h"

Net::Net() {
    //adds connections to neurons
    for(int i = 0; i < numberOfLayers - 1; i++){
        //each layer gets connections for all neurons in the next layer
        Connection_List* input = layers[i+1]->createConnectionList();
        layers[i]->addConnectionLists(input);
    }
}


void Net::getInputVectors() {
    //todo: determine input vectors
}

void Net::getOutputVectors() {
    /*
     * This function loops through and runs doTick() until an ouput is reached
     * I have yet to determine what condition will stop the net from ticking.
     */

    while(true){ //todo: determine an exit condition for doTick()
        doTick();
    }
}
void Net::doTick() {
/*
 * Here we go, this is going to be a doozy..
 * Tick is going to be the basic unit of time in the net.
 * Each time a tick happens, the following will happen
 *      -$tick is incremented
 *      -Each neuron is looped through (layers, then neurons in layer)
 *          +$newInputSum is moved to $inputSignal for all neurons
 *          +The reason for this is not to confuse the input it gets from other neurons with the input from the last tick
 *          +This is done completely separately from the exchanging input phase
 *      -Each neuron is looped through again (same fashion)
 *          +Neurons activation is calculated from its $inputSignal
 *          +Neurons send a signal through its connections
 *          +Signal is stored in other neurons $newInputSum vaue
 *
 * Tick should keep going until a specific output vector is reached.
 *      Im not quite sure how that will work yet
 *
 */
    for(int i = 0; i < numberOfLayers; i++){
        layers[i]->finalizeLayerInputs();
    }
    for(int i = 0; i < numberOfLayers; i++){
        layers[i]->determineActivations();
        layers[i]->sendOutputSignals();
    }


}


