#ifndef ALGORITHMSORTALL
#define ALGORITHMSORTALL
#include "SelectionAlgorithm.h"
#include <iostream>
#include <string>

using namespace std;

class AlgorithmSortAll :public SelectionAlgorithm {
public:
    AlgorithmSortAll(int k);
    virtual int select();

};

#endif 
