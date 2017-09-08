#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program 
    string mystring1,mystring2; 
    char temp; 
    cin >> mystring1 >> mystring2; 
    cout <<mystring1.length() <<" " <<mystring2.length() <<endl; 
    cout <<mystring1+mystring2 <<endl; 
    temp=mystring1[0];  
    mystring1[0]=mystring2[0]; //Executes the required swap. 
    mystring2[0]=temp; 
    cout <<mystring1 <<" " <<mystring2 <<endl; //Prints the required final output. 
    return 0;
}


