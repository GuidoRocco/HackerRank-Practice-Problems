using System;
using System.Collections.Generic;
using System.IO; 

class Solution {
    static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */ 
        int n = int.Parse(Console.ReadLine()); 
        List<int> list_int = new List<int>(); 
        string [] string_int = Console.ReadLine().Split(' '); 
        for(int i = 0; i < n; i++) 
        {
            list_int.Add(int.Parse(string_int[i])); 
        } 
        list_int.Sort(); 
        foreach(int element in list_int) 
        {
            Console.Write(element + " "); 
        } 
        return; 
    }
}
