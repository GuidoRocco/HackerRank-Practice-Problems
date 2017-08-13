#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
    int length, abs_diff, value, min = 1000000; 
    vector<int> vec_int; 
    cin >> length; 
    for(int i = 0; i < length; i++) 
    {
        cin >> value; 
        vec_int.push_back(value); 
    } 
    sort(vec_int.begin(), vec_int.end()); 
    for(int i = 0; i < vec_int.size() - 1; i++) 
    {
        if(abs(vec_int[i] - vec_int[i+1]) < min) 
        {
            min = abs(vec_int[i] - vec_int[i+1]); //Retrieve the minimum 
        }
    } 
    for(int i = 0; i < vec_int.size() - 1; i++) 
    {
        if(abs(vec_int[i] - vec_int[i+1]) == min) //Print the couple associated to the minimum values 
            cout <<vec_int[i] << " " << vec_int[i+1] << " "; 
    }
    return 0;
}
