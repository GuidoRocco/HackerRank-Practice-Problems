#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int calculate_mode(vector<int> array, int size)
{
    
        int counter = 1;
        int max = 0;
        int mode = array[0];
        for (int i = 0; i < size - 1; i++) 
        { if ( array[i] == array[i + 1] )
           {
              counter++;
              if (counter > max)
              {
                  max = counter;
                  mode = array[i]; 
              }
           } else
              counter = 1; // reset counter.
        } 
    return mode; 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_val, temp_val; 
    double mean, median, mode = 1; 
    cin >> num_val; 
    vector<int> values; 
    for(int i = 0; i < num_val; i++) 
    {
        cin >> temp_val; 
        values.push_back(temp_val); 
    } 
    int sum = 0; 
    for(int i = 0; i < num_val; i++) 
    {
        sum += values[i]; 
    } 
    mean = (double)sum / (double)num_val; 
    sort(values.begin(), values.end()); 
    int length = values.size(); 
    median = (double)(values[length/2] + values[(length / 2) - 1]) / 2; 
    int temp_count, last_number = values[0], max_val = 0; 
    for(int i = 1; i < length; i++) 
    {
        if(last_number == values[i]) 
            temp_count++; 
        else 
        {
            last_number = values[i]; 
            if(temp_count > max_val) 
            {
                max_val = temp_count; 
                mode = values[i - 1]; 
            } 
            temp_count = 0; 
        }
    } 
    cout << mean << endl << median << endl << calculate_mode(values, length) << endl; 
    return 0;
}

