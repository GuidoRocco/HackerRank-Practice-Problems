#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int array_length; 
    cin >> array_length; 
    int* num_array = new int[array_length]; 
    for(int i = 0; i < array_length; i++) 
    { 
      cin >> num_array[i]; 
    } 
    
    for(int i = 0; i < array_length; i++) 
    { 
      cout <<num_array[array_length-i-1] << " "; 
    } 
    delete[] num_array; 
    return 0;
}
