class D : public A, B, C 
{

	int val;
	public:

		 D()
		 {
		 	val=1;
		 }


		 void update_val(int new_val)
		 { int five = 0; 
           int temp=new_val; 
            while( temp >0 && temp % 5 == 0) 
                 { C::func(val); 
                   temp/=5; 
                     } 
           int three = 0; 
           temp=new_val; 
           while(temp > 0 && temp % 3 == 0) 
                { B::func(val);  
                  temp/=3; 
                    } 
          
           int two = 0; 
           while(temp > 0 && temp % 2 == 0 ) 
               { A::func(val);  
                 temp/=2; 
                  } 

			
		 }

		 void check(int); //Do not delete this line.
};
