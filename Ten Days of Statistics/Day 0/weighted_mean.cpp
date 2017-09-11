#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 
    int num_val, temp; 
    double sum_val, sum_weights; 
    vector<double> values; 
    vector<double> weights; 
    cin >> num_val; 
    for(int i = 0; i < num_val; i++) 
    {
        cin >> temp; 
        values.push_back(temp); 
    } 
    for(int i = 0; i < num_val; i++) 
    {
        cin >> temp; 
        weights.push_back(temp); 
    } 
    for(int i = 0; i < num_val; i++) 
    {
        sum_val += (values[i] * weights[i]); 
    } 
    for(int i = 0; i < num_val; i++) 
    {
        sum_weights += weights[i]; 
    } 
    double result = sum_val / sum_weights; 
    printf("%.1f", result);  
    return 0;
}
