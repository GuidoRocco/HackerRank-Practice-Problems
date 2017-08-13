// Define specializations for the Traits class template here. 
template <> struct Traits<Color> 
{ 
  static string name(int index) 
  { 
    switch(index) 
    { 
      case 0: 
        return "red"; 
        break; 
        
      case 1: 
        return "green"; 
        break; 
        
      case 2: 
        return "orange"; 
        break; 
        
      default: 
        return "unknown"; 
        break; 
        
    }
  }
} 
; 

template <> struct Traits<Fruit> 
{ 
  static string name (int index) 
  { 
    switch(index) 
    { 
      case 0: 
        return "apple"; 
        break; 
        
      case 1: 
        return "orange"; 
        break; 
        
      case 2: 
        return "pear"; 
        break; 
        
      default: 
        return "unknown"; 
        break; 
      
    }
  }
} 
; 
