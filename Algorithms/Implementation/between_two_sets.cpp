#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n, m; 
    int val; 
    vector<int> vector_a; 
    vector<int> vector_b; 
    cin >> n >> m; 
    for(int i = 0; i < n; i++) 
    {
        cin >> val; 
        vector_a.push_back(val); 
    } 
    for(int i = 0; i < m; i++) 
    {
        cin >> val; 
        vector_b.push_back(val); 
    } 
    sort(vector_a.begin(), vector_a.end()); 
    sort(vector_b.begin(), vector_b.end()); 
    int min = vector_a[0]; 
    int max = vector_b[vector_b.size() - 1]; 
    bool is_between = true; 
    int count = 0; 
    for(int i = min; i <= max; i++) 
    {
        for(int j = 0; j < vector_a.size(); j++) 
        {
            if(i % vector_a[j] != 0) 
                is_between = false; 
        } 
        for(int j = 0; j < vector_b.size(); j++) 
        {
            if(vector_b[j] % i != 0) 
                is_between = false;        
        }  
        if(is_between) 
        {
            count++; 
        } 
        is_between = true; 
    } 
    cout << count << endl; 
    return 0;
}

