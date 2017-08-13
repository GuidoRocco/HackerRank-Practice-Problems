int student_id=0; 
int prof_id=0; 

class Person 
     {  public: 
          virtual void getdata()=0; 
          virtual void putdata()=0; 
       protected: 
           string name; 
           int age; 
     } ; 

class Professor : public Person 
     {   
           public: 
              
              void putdata(void); 
              void getdata(void); 
          
           private: 
               string name; 
               int age; 
               int publications; 
            

} ; 

class Student : public Person 
     { public: 
           
           void putdata(void); 
           void getdata(void); 
      
       private: 
           string name; 
           int age; 
           int marks[6]; 
            


} ; 



void Student::putdata(void) 
    { int tot=0; //Stores the sum of the marks. 
      cout <<name <<" " <<age <<" "; 
      for(int i=0;i<6;i++) 
      {tot+=marks[i]; 
         }  
      cout <<tot <<" ";  
      cout <<++student_id <<endl; 
      return; 
       } 

void Student::getdata(void) 
    { cin >> name >> age; 
       for(int i=0;i<6;i++) 
         cin >> marks[i]; 
       return; 
       } 


void Professor::putdata(void) 
{ cout <<name <<" " <<age <<" " <<publications <<" "; 
  cout <<++prof_id <<endl; 
  return;      } 

void Professor::getdata(void)  
    { cin >> name >> age >> publications; 
      return; 
    } 
