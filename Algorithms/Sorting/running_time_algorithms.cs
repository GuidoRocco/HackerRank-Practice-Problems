using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    
    public static int insertion_sort_with_counter(int ar_size, int [] array) 
    {
        int num_of_steps = 0; 
        for(int i = 0; i < ar_size; i++) 
        {
            int j = i-1; 
            int value = array[i]; 
            while(j>=0 && array[j] > value) 
            {
                array[j+1] = array[j]; 
                num_of_steps++; 
                j--; 
            } 
            array[j+1] = value; 
            
        } 
        
        return num_of_steps; 
    }
    
    public static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */ 
        int ar_size; 
        ar_size = int.Parse(Console.ReadLine()); 
        string [] numbers = Console.ReadLine().Split(' '); 
        int [] array = new int[ar_size]; 
        for(int i = 0; i < ar_size; i++) 
        {
            array[i] = int.Parse(numbers[i]); 
        } 
        int num_of_steps = insertion_sort_with_counter(ar_size, array); 
        Console.WriteLine(num_of_steps); 
        return; 
    }
}
