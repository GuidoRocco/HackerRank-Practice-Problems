#include <stdio.h> 
#include <iostream> 
#include <cmath> 
using namespace std; 

void update(int *a,int *b) {
    // Complete this function 
    int temp = *a; 
    *a = *a + *b; 
    *b = abs(*b - temp); 
    return; 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}