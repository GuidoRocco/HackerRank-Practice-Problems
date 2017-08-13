
template <bool... digits> int reversed_binary_value() 
{ 
  int result = 0; 
  int temp = 1; 
  for (bool bit : {digits...}) 
  { 
    if(bit) 
    { 
      result += temp; 
    } 
      
    temp *= 2; 
  } 
    
  return result; 
  
}
