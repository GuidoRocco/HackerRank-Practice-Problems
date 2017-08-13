using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */ 
        int n = int.Parse(Console.ReadLine()); 
        string [] string_array = Console.ReadLine().Split(' '); 
        List<int> list_int = new List<int>(); 
        for(int i = 0; i < string_array.Length; i++) 
        {
            list_int.Add(int.Parse(string_array[i])); 
        } 
        list_int.Sort(); 
        int index_of_median = (n % 2 == 0) ? (n / 2) : (n/2); 
        Console.WriteLine(list_int[index_of_median]); 
        return; 
    }
}
