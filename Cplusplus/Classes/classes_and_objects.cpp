class Student 
{ 
   private: 
     int scores[5]; 
   
   public: 
      void input() 
    { 
       int value_to_add; 
       
       for(int i = 0; i < 5; i++) 
       { 
           cin >> value_to_add; 
           scores[i] = value_to_add; 
       } 
       
       return; 
   } 
    
     int calculateTotalScore() 
   { 
      int sum = 0; 
      for(int i = 0; i < 5; i++) 
      { 
        sum+=scores[i]; 
      } 
       
     return sum; 
    
   }


}; 
