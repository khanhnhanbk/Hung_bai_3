#ifndef CRAND_H
#define CRAND_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

class CRand {
public:
    CRand();
    CRand(int seed);
    ~CRand();
    double rand();
    double rand(double min, double max);
    int rand(int min, int max);
    void setSeed(int seed);
    void setSeed();
    void printSeed();
private:
    int seed;
};

#endif