
class BadLengthException : public exception 
{ 
  private: 
    int mess_length; 
    
  public: 
    BadLengthException(int n) : mess_length(n){ } 
    int what() 
    { 
      return mess_length; 
    }
}
; 
