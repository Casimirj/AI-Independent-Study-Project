//
// Created by falcon on 3/19/18.
//

#include "Connection.h"



Connection::Connection() {
    target = new Neuron();
}

double Connection::getWeight() {
    return weight;
}

void Connection::sendSignal(double input) {
/*
 * This function should be called by a neuron with its output signal
 * which should be altered by the weights and stored in the $target
 * neurons $newInputSum variable
 */
}
