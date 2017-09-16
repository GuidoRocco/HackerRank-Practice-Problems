#include <cmath>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

double stdev(vector<double> values) 
{
    double sum = 0; 
    double num_val = values.size(); 
    double mean = accumulate(values.begin(), values.end(), 0) / num_val; 
    for(int i = 0; i < num_val; i++) 
    {
        sum += (values[i] - mean) * (values[i] - mean); 
    } 
    double v_rad = sum / num_val; 
    double st_dev = sqrt(v_rad); 
    return st_dev; 
}

double covariance(vector<double> vec_x, vector<double> vec_y) 
{
    double result = 0; 
    double sum = 0; 
    for(int i = 0; i < vec_x.size(); i++) 
    {
        sum += vec_x[i]; 
    } 
    double x_mean = sum / vec_x.size(); 
    sum = 0; 
    for(int i = 0; i < vec_y.size(); i++) 
    {
        sum += vec_y[i]; 
    } 
    double y_mean = sum / vec_y.size(); 
    for(int i = 0; i < vec_x.size(); i++) 
    {
        result += ((vec_x[i] - x_mean) * (vec_y[i]- y_mean)); 
    } 
    return result / vec_x.size(); 
}

int main() { 
    int s_size; 
    vector<double> x, y; 
    double val; 
    cin >> s_size; 
    for(int i = 0; i < s_size; i++) 
    {
        cin >> val; 
        x.push_back(val); 
    } 
    for(int i = 0; i < s_size; i++) 
    {
        cin >> val; 
        y.push_back(val); 
    } 
    double pearson = covariance(x, y) / (stdev(x) * stdev(y)); 
    cout << setprecision(3) << pearson << endl; 
    return 0;
}
