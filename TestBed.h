#ifndef TESTBED
#define TESTBED
#include "SelectionAlgorithm.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"

class TestBed {

private:
    SelectionAlgorithm* algorithm;

public:
    void execute();
    void setAlgorithm(int, int);
    TestBed();
    ~TestBed();
};

#endif 
