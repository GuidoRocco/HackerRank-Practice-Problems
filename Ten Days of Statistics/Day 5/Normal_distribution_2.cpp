/* 
The error function is taken from this website: http://introcs.cs.princeton.edu/java/21function/ErrorFunction.java.html 
The source code was originally in Java, but I converted it in C++. 
*/ 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

 double normal(double mean, double std, double x) 
{
        double res = (x - mean) / (std * sqrt(2));
        return (0.5) * (1 + erf(res));
}
        

double erf(double z) 
{
        double t = 1.0 / (1.0 + 0.5 * abs(z));

        // use Horner's method
        double ans = 1 - t * exp( -z*z   -   1.26551223 +
                                            t * ( 1.00002368 +
                                            t * ( 0.37409196 + 
                                            t * ( 0.09678418 + 
                                            t * (-0.18628806 + 
                                            t * ( 0.27886807 + 
                                            t * (-1.13520398 + 
                                            t * ( 1.48851587 + 
                                            t * (-0.82215223 + 
                                            t * ( 0.17087277))))))))));
        if (z >= 0) return  ans;
        else        return -ans;
}

int main() { 
    double mean = 70, std = 10; 
    double result_a = 1 - normal(mean, std, 80); 
    double result_c = normal(mean, std, 60); 
    double result_b = 1 - normal(mean, std, 60); 
    printf("%.2f\n%.2f\n%.2f\n", result_a * 100, result_b * 100, result_c * 100); 
    return 0;
}
