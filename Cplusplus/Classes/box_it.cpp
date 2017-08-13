class Box 
{ 
   private: 
      
      long l; 
      long b; 
      long h; 
    
   public: 
    
      Box() 
      { 
        l = 0; 
        b = 0; 
        h = 0; 
        return; 
      } 
    
      Box(int l, int b, int h) 
      { 
        this->l = l; 
        this->b = b; 
        this->h = h; 
        return; 
      } 
    
      Box(const Box& B) 
      { 
        l = B.l; 
        b = B.b; 
        h = B.h; 
        return; 
      }
     
     int getLength(void) 
     { 
       return l; 
     } 
    
     int getBreadth(void) 
     { 
       return b; 
     } 
    
     int getHeight(void) 
     { 
       return h; 
     } 
    
     long long CalculateVolume(void) 
     { 
       return l*b*h; 
     } 
    
    bool operator <(Box &B) 
    { 
      if (l < B.l) 
          return true; 
      else if (b < B.b && l == B.l) 
          return true; 
      else if (h < B.h && b == B.b && l == B.l) 
          return true; 
      else 
          return false; 
    } 
    
  
}
; 

std::ostream& operator <<(ostream& out, Box &B) 
    { 
      out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight(); 
      return out; 
    } 
