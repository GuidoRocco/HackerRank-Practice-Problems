

template <class T> class AddElements 
{ 
  public: 
    T element; 
    AddElements(T first_element) 
    { 
      element = first_element; 
      return; 
    }
    
    T add(T second_element) 
      { 
         return element + second_element; 
       } 
    }
; 

template<> class AddElements<string> 
{ 
  public: 
    string element; 
    AddElements(string first_string) 
     { 
        element = first_string; 
        return; 
       }
    string concatenate(string second_string) 
      { 
        return element + second_string; 
        }
} 
; 
