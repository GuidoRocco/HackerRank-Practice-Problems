using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */ 
        int value_to_search = int.Parse(Console.ReadLine()); 
        int length_array = int.Parse(Console.ReadLine()); 
        string [] string_array = Console.ReadLine().Split(' '); 
        for(int i = 0; i < string_array.Length;i++) 
        {
            if(int.Parse(string_array[i]) == value_to_search) 
            {
                Console.WriteLine(i); 
                break; 
            }
        } 
        return; 
    }
}
