#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, pairs = 0; 
    int val; 
    vector<int> socks; 
    cin >> n; 
    for(int i = 0; i < n; i++) 
    {
        cin >> val; 
        socks.push_back(val); 
    } 
    sort(socks.begin(), socks.end()); 
    for(int i = 0; i < n - 1; i++) 
    {
        if(socks[i] == socks[i+1]) 
        {
            pairs++; 
            i++; 
        } 
    } 
    cout << pairs << endl; 
    return 0;
}
