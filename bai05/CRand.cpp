#include "CRand.h"

CRand::CRand() {
    seed = time(NULL);
}
void CRand::setSeed(int seed) {
    this->seed = seed;
}
void CRand::setSeed() {
    seed = time(NULL);
}
void CRand::printSeed() {
    std::cout << "seed: " << seed << std::endl;
}
double CRand::rand() {
    return (double)rand() / RAND_MAX;
}
double CRand::rand(double min, double max) {
    return min + (max - min) * rand();
}
int CRand::rand(int min, int max) {
    return min + (max - min) * rand();
}
CRand::CRand(int seed) {
    this->seed = seed;
}
CRand::~CRand() {
}
