#ifndef TOOL_H
#define TOOL_H
#include <iostream>
#include <vector>
#include <random>
#include<algorithm>
#include<chrono>
using std::cout;
using std::default_random_engine;
using std::uniform_real_distribution;
using std::endl;
using std::vector;
using std::sort;
using std::chrono::steady_clock;
using std::chrono::duration;

vector<float> *Initialize(int, int);
void check(vector<double> *);
struct keys_logits{
    int sizeKeys;
    int sizeLogits;
    float *keys;
    float *logits;
}
#endif
