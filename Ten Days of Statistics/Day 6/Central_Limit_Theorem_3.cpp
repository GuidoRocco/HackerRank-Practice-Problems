#include <cmath>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    double s_mean = 500.0; 
    double s_std = 80.0; 
    double z_score = 1.96; 
    double margin_error = z_score * s_std / sqrt(100); 
    printf("%.2f\n%.2f\n", s_mean - margin_error, s_mean + margin_error); 
    return 0; 
}


