#include <cmath>
#include <cstdio>
#include <iomanip>
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
    double mean = 2.5; 
    double result = poisson(mean, 5); 
    printf("%.3f\n", result); 
    return 0;
}

