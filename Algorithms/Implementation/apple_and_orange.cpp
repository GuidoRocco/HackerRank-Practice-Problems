#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int s, t, a, b, m, n; 
    int temp_int; 
    int apples_on_house= 0, oranges_on_house = 0; 
    vector<int> apples; 
    vector<int> oranges; 
    cin >> s >> t >> a >> b >> m >> n; 
    for(int i = 0; i < m; i++) 
    {
        cin >> temp_int; 
        apples.push_back(temp_int); 
    } 
    for(int i = 0; i < n; i++) 
    {
        cin >> temp_int; 
        oranges.push_back(temp_int); 
    } 
    for(int i = 0; i < m; i++) 
    {
        if(apples[i] + a >= s && apples[i] + a <= t) 
            apples_on_house++; 
    } 
    for(int i = 0; i < n; i++) 
    {
        if(oranges[i] + b >= s && oranges[i] + b <= t) 
            oranges_on_house++; 
    } 
    cout << apples_on_house << endl << oranges_on_house << endl; 
    return 0;
}
