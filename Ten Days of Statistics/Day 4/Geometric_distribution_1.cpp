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

double binom(int n, int k) 
{
    return (double)(factorial(n)/(factorial(k) * factorial(n - k))); 
}

double binomial(int n, double p, int x) 
{
    double q = 1 - p; 
    return binom(n, x) * pow(p, x) * pow(q, (n - x)); 
}

double geometrical(int n, double p) 
{
    double q = 1 - p; 
    return pow(q, n - 1) * p; 
}

int main() { 
    
    double p = 0.33; 
    int x = 5; 
    printf("%.3f\n", geometrical(x, p)); 
    return 0;
}
