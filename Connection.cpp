//
// Created by falcon on 3/19/18.
//

#include "Connection.h"



Connection::Connection(Neuron* inputtarget, int inputweight) {
    target = inputtarget;
    weight = inputweight;
}

double Connection::getWeight() {
    return weight;
}

void Connection::sendSignal(double input) {
/*
 * This function should be called by a neuron with its output signal
 * which should be altered by the weights and stored in the $target
 * neurons $newInputSum variable.
 */
    double result = input * weight;
    target->addToInputSum(result);
}




//8888888888888888888888888888888--Linked List Stuff--88888888888888888888888888888888
Connection* Connection::getNext() {
    return next;
}
void Connection::setNext(Connection* input) {
    next = input;
}
bool Connection::nextIsNull() {
    return (this->next == nullptr);
}

