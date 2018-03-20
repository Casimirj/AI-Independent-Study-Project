//
// Created by falcon on 3/19/18.
//

#include "Connection_List.h"

void Connection_List::addConnection(Connection *input) {
    size++;
    if (head == 0) head = input;
    else {
        Connection *iterator = head;

        while (!iterator->nextIsNull()) {
            iterator = iterator->getNext();
        }
        iterator->setNext(input);
    }
}

Connection *Connection_List::getConnection(int connectionNumber) {
    /*
     * basic linkedlist getXfunction, this does it by its posisition in the
     * list, just so it can be looped through and
     */
    Connection* iterator = head;
    for(int i = 0; i < connectionNumber && !iterator->nextIsNull(); i++){
        iterator = iterator->getNext();
    }
return iterator;
}

int Connection_List::getSize() {
    /*
     * gets size of list, why do you even care?
     */
    return size;
}


