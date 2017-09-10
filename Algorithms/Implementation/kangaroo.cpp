#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int x_1, v_1, x_2, v_2; 
    cin >> x_1 >> v_1 >> x_2 >> v_2; 
    if(x_1 <= x_2 && v_1 < v_2) 
    {
        cout << "NO" << endl; 
        return 0; 
    } 
    else if(x_2 <= x_1 && v_2 < v_1) 
    {
        cout << "NO" << endl; 
        return 0; 
    } 
    int i = 0; 
    while(x_1 != x_2) 
    {
        x_1 += v_1; 
        x_2 += v_2; 
        i++; 
        if(i == 10000) 
        {
            cout << "NO" << endl; 
            return 0; 
        } 
    } 
    cout << "YES" << endl; 
    return 0;
}
