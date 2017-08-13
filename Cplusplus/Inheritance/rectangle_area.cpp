class Rectangle 
      {  
            public: 
               Rectangle() 
               { } ; 
               void Display(void); 
           
            protected: 
               int width; 
               int heigth; 

} ; 

void Rectangle::Display (void) 
    { cout <<width <<" " <<heigth; 
      cout <<endl; 
      return; } 

class RectangleArea : public Rectangle 
      {    
            public: 
               RectangleArea() 
                      {  } ; 
               void Display(void); 
               void Input (void); 

} ; 

void RectangleArea::Display (void) 
         { cout <<(width*heigth) <<endl; 
            return; } 

void RectangleArea::Input(void)
       { cin >> width >> heigth; 
         return; } 
