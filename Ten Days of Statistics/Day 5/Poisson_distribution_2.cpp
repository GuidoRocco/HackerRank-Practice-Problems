#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n) 
{
    if(n == 0 || n == 1) 
        return 1; 
    else 
        return n * factorial(n - 1); 
}

double poisson(double lambda, int k) 
{
    double e = 2.71828; 
    return (double)pow(lambda, k) / (double)(pow(e, lambda) * factorial(k)); 
}

int main() {
    double mean_a = 0.88, mean_b = 1.55; 
    double c_a = 160 + 40 * (mean_a + mean_a * mean_a); 
    double c_b = 128 + 40 * (mean_b + mean_b * mean_b); 
    printf("%.3f\n%.3f\n", c_a, c_b); 
    return 0;
}
