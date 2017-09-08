#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) { 
    vector<int> vect; 
    int value; 
    char ch; 
    stringstream ss(str); 
    while(ss>>value) 
        { vect.push_back(value); 
         ss >> ch; } 
    return vect; 
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}


