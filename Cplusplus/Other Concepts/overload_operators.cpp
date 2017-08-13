//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
Complex operator +(const Complex& first_num, const Complex& second_num) 
{ 
  Complex new_num; 
  new_num.a = first_num.a + second_num.a; 
  new_num.b = first_num.b + second_num.b; 
  return new_num; 
} 

ostream& operator <<(ostream& out, const Complex& num)  
{ 
  out << num.a << "+" <<"i" <<num.b; 
  return out; 
}
