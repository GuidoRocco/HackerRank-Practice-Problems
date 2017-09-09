#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n, k, count; 
    int temp_val; 
    vector<int> nums; 
    cin >> n >> k; 
    for(int i = 0; i < n; i++) 
    {
        cin >> temp_val; 
        nums.push_back(temp_val); 
    } 
    for(int i = 1; i < n; i++) 
    {
        for(int j = 0; j < i; j++) 
        {
            if((nums[i] + nums[j]) % k == 0) 
                count++; 
        }
    } 
    cout << count << endl; 
    return 0;
}
