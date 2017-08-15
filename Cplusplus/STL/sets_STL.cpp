#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() { 
    int number; 
    int querynumber,element; 
    set<int> myset;  
    cin >> number; 
    for(int i=0; i<number; i++) 
         { cin >> querynumber >> element; 
          if (querynumber==1) myset.insert(element); 
          else if (querynumber==2) myset.erase(element); 
           if(querynumber==3) 
                { if(myset.find(element)!=myset.end()) 
                      cout <<"Yes" <<endl; 
                  else 
                      cout <<"No" <<endl; 
                 
        }
         } 
    return 0; 
    
     } 


