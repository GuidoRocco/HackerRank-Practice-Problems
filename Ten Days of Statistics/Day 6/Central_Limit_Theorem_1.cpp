#include <cmath>
#include <cstdio>
#include <iomanip>
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
    double s_mean = 205 * 49; 
    double s_std = 15 * 7.0; 
    double result = normal(s_mean, s_std, 9800); 
    cout << setprecision(3) << result << endl; 
    return 0;
}


