//
// Created by falcon on 3/19/18.
//

#include "Neuron.h"


Neuron::Neuron() {
    //todo: neuron constructor

}


double Neuron::determineActivation() {
/*
 * This is the simple one, it shoud just take the $inputSignal
 * and apply the bianary sigmoid funtion to it
 * storing the output in $activation
 */

    if(inputSignal > 0) activation = 1;
    else activation = 0;
}

void Neuron::finalizeInputSum() {
/*
 * This function takes the $newInputSum and transfers the value
 * to $inputSignal. The purpose of this function is to provide clarity
 * With how much input signal any neuron has at any given tick. Since
 * neurons may be given a different signal at different ticks it important
 * to keep track of its current signal to ouput and the signal its recieving
 * on the same tick separately
 *
 * This is all to avoid the problem of some neurons firing before others
 * because they were hit first in the loop, giving a disingenuous
 * input signal.
 */
    inputSignal = newInputSum;
    newInputSum = 0;
}

void Neuron::sendOutputSignal() {
/*
 * This function should loop through through the connections
 * And send its activation as output. After the signal is altered by
 * the connections weight it is stored in the target neurons $newInputSum variable
 */
    for(int i = 0; i < connections->getSize(); i++){
        connections->getConnection(i)->sendSignal(activation);
    }
}


void Neuron::addToInputSum(double input) {
/*
 * adds to the total of all inputs
 */
    newInputSum += input;
}

void Neuron::addConnections(Connection_List* input){
    connections = input;
}
