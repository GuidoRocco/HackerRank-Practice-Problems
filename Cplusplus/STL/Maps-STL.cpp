#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> mymap; 
    int query,querynumber; 
    string name; //Data of the students. 
    int mark; 
    cin >> querynumber; 
    for(int i=0; i<querynumber;i++) { 
    cin >> query >> name; 
    if (query==1) {
         cin >> mark; 
         mymap[name]+=mark;    
    } 
    else if (query==2) { 
        mymap[name]=0; 
        } 
    else {
        cout <<mymap[name] <<endl; 
        
    } 
  }
    return 0;
}
