#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num_array, num_query, length_array, value, first, second; 
    cin >> num_array >> num_query; 
    vector<vector<int>> array_of_arrays;  
    for(int i = 0; i < num_array; i++) 
    { 
      cin >> length_array; 
      vector<int> temp_array; 
        for(int j = 0; j < length_array; j++) 
        { 
          cin >> value; 
          temp_array.push_back(value); 
        } 
      array_of_arrays.push_back(temp_array); 
      
    } 
    for(int k = 0; k < num_query; k++) 
    { 
      cin >> first >> second; 
      cout <<array_of_arrays[first][second]  <<endl; 
    }
    return 0;
}
