#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double calculate_median(vector<int> vec) 
{
    if(vec.size() % 2 == 0) 
    {
        return ( vec[vec.size() / 2] + vec[(vec.size() / 2) - 1]) / 2; 
        } 
    else 
    {
        int index = vec.size() / 2; 
        return vec[index]; 
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_val, temp, q_1, q_2, q_3; 
    vector<int> values; 
    vector<int> first_vec, second_vec; 
    cin >> num_val; 
    for(int i = 0; i < num_val; i++) 
    {
        cin >> temp; 
        values.push_back(temp); 
    } 
    sort(values.begin(), values.end()); 
    int median = calculate_median(values); 
    for(int i = 0; i < num_val; i++) 
    {
        if(values[i] < median) 
            first_vec.push_back(values[i]); 
        else if(values[i] == median) 
            continue; 
        else 
            second_vec.push_back(values[i]); 
    } 
    q_1 = calculate_median(first_vec); 
    q_2 = median; 
    q_3 = calculate_median(second_vec); 
    cout << q_1 << endl << q_2 << endl << q_3 << endl; 
    return 0;
}
