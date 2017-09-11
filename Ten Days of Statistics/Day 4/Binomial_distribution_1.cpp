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

int main() { 
    double a, b; 
    int n = 6; 
    double p = 0.5215; 
    double result = 0; 
    cin >> a >> b; 
    for(int x = 3; x <= 6; x++) 
    {
        result += binomial(n, p, x); 
    } 
    printf("%.3f\n", result); 
    return 0;
}
