#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


int main() {

    int num_val, temp;  
    double st_dev, sum; 
    vector<int> values; 
    cin >> num_val; 
    for(int i = 0; i < num_val; i++) 
    {
        cin >> temp; 
        values.push_back(temp); 
    } 
    double mean = std::accumulate(values.begin(), values.end(), 0) / num_val; 
    for(int i = 0; i < num_val; i++) 
    {
        sum += (values[i] - mean) * (values[i] - mean); 
    } 
    double v_rad = sum / num_val; 
    st_dev = sqrt(v_rad); 
    printf("%.1f", st_dev); 
    return 0;
}
