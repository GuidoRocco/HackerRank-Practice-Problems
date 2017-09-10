#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


int main() {
    int n, k; 
    int b_charged = 0, b_actual = 0; 
    int val; 
    vector<int> prices; 
    cin >> n >> k; 
    for(int i = 0; i < n; i++) 
    {
        cin >> val; 
        prices.push_back(val); 
    } 
    cin >> b_charged; 
    for(int i = 0; i < n; i++) 
    {
        if(i != k) 
            b_actual += prices[i]; 
    } 
    b_actual /= 2; 
    if(b_charged == b_actual) 
        cout << "Bon Appetit" << endl; 
    else 
        cout << b_charged - b_actual << endl; 
    return 0;
}

