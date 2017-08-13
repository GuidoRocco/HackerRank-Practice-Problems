using System;
using System.Collections.Generic;
using System.IO;
class Solution { 
    
    public static void swap(int [] ar, int i, int j) 
    {
        int temp = ar[i]; 
        ar[i] = ar[j]; 
        ar[j] = temp; 
        return; 
    } 
    
public static void partition(int[] ar) {
    
    int pivot = ar[0]; 
    List<int> left_side = new List<int>();  
    List<int> right_side = new List<int>(); 
    for(int i = 1; i < ar.Length; i++) 
    {
        if(ar[i] <= pivot) 
            left_side.Add(ar[i]); 
        else 
            right_side.Add(ar[i]); 
    } 
    foreach(int element in left_side) 
        Console.Write(element + " "); 
    Console.Write(pivot + " "); 
    foreach(int element in right_side) 
        Console.Write(element + " "); 
    

}
/* Tail starts here */
    static void Main(String[] args) {
           
           int _ar_size;
           _ar_size = Convert.ToInt32(Console.ReadLine());
           int [] _ar =new int [_ar_size];
           String elements = Console.ReadLine();
           String[] split_elements = elements.Split(' ');
           for(int _ar_i=0; _ar_i < _ar_size; _ar_i++) {
                  _ar[_ar_i] = Convert.ToInt32(split_elements[_ar_i]); 
           }

           partition(_ar);
    }
}
