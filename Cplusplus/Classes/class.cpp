#include <iostream>
#include <sstream>
using namespace std;

class Student 
    {   
       public: 
          Student() 
          { } ; 
          string get_first_name(void) 
               { return first_name; }
          string get_last_name(void) 
                { return last_name; }
          int get_age(void) 
              { return age; } 
          int get_standard (void) 
              { return standard; }
          void set_first_name (string mystring) 
               { first_name=mystring; 
                 return; }
         void set_last_name(string mystring) 
              { last_name=mystring; 
                return; } 
        void set_age(int myage) 
            { age=myage; 
              return; } 
        void set_standard(int mystandard) 
            { standard = mystandard; 
               return; } 
        string to_string(void) 
            { stringstream returnstring;  
              returnstring <<age <<"," <<first_name <<"," <<last_name <<"," <<standard; 
              return returnstring.str(); 
               } 
     private: 
        string first_name, last_name; 
        int age, standard; 
  

}; 

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
