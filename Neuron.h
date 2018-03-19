//
// Created by falcon on 3/19/18.
//

#ifndef NEURAL_NETS_NEURON_H
#define NEURAL_NETS_NEURON_H



class Neuron {
private:
    double activation = 0; //out of 100

    double inputSignal;
    double newInputSum = 0;




public:
    Neuron();

    double determineActivation();
    void sendOutputSignal();
    void finalizeInputSum();

};


#endif //NEURAL_NETS_NEURON_H
