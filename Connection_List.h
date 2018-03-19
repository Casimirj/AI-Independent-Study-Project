//
// Created by falcon on 3/19/18.
//

#ifndef NEURAL_NETS_CONNECTION_LIST_H
#define NEURAL_NETS_CONNECTION_LIST_H


#include "Connection.h"

class Connection_List {
/*
 * The point of this class is to create a linked list of
 * connections, without having the list functionality as
 * part of the connection class.
 *
 * It just seemed a whole lot cleaner this way
 */

private:
    Connection* head;
    int size = 0;
public:
    void addConnection(Connection* input);
    Connection* getConnection(int connectionNumber);
    int getSize();
};


#endif //NEURAL_NETS_CONNECTION_LIST_H
