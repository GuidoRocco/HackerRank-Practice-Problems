using System;
using System.Collections.Generic; 
using System.Numerics; 
using System.IO;
using System.Linq; 

namespace Solution {
class Solution {
    
    public static void Main(string[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
        BigInteger t1, t2, temp, n; 
        string [] string_integers = Console.ReadLine().Split(' '); 
        t1 = BigInteger.Parse(string_integers[0]); 
        t2 = BigInteger.Parse(string_integers[1]); 
        n = BigInteger.Parse(string_integers[2]); 
        BigInteger [] slots = new BigInteger[2]; 
        slots[0] = t1; slots[1] = t2; 
        for(int i = 2; i < (int)n; i++) 
        {
            temp = slots[0]; 
            slots[0] = slots[1]; 
            slots[1] = temp + BigInteger.Pow(slots[0],2); 
        } 
        Console.WriteLine(slots[1]); 
        return; 
    }
}
}
