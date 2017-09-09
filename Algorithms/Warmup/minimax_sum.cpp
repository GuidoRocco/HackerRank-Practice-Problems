#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    vector<long> values; 
    vector<long> sums; 
    long temp; 
    long sum; 
    for(int i = 0; i < 5; i++) 
    {
        cin >> temp; 
        values.push_back(temp); 
    } 
    for(int i = 0; i < 5; i++) 
    {
        sum = 0; 
        for(int j = 0; j < 5; j++) 
        {
            if(j == i) 
                continue; 
            else 
                sum += values[j]; 
        }
        sums.push_back(sum); 
    } 
    sort(sums.begin(), sums.end()); 
    cout << sums[0] << " " << sums[sums.size() - 1] << endl; 
    return 0;
} 

