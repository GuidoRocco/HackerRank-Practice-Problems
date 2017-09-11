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
    int n = 10; 
    double p = 0.12; 
    double first_result = 0, second_result = 0; 
    for(int x = 0; x <= 2; x++) 
    {
        first_result += binomial(n, p, x); 
    } 
    for(int x = 2; x <= 10; x++) 
    {
        second_result += binomial(n, p, x); 
    } 
    printf("%.3f\n%.3f\n", first_result, second_result); 
    return 0;
}
