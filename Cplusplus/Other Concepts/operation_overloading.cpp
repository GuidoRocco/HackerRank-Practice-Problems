class Matrix 
{ 
  public: 
    vector<vector<int>> a; 
    
    Matrix& operator +(const Matrix& second_matrix) 
    { 
      Matrix new_matrix; 
      for(int i = 0; i < second_matrix.a.size(); i++) 
      { 
        for(int j = 0; j < second_matrix.a[0].size(); j++) 
        { 
          this->a[i][j] = this->a[i][j] + second_matrix.a[i][j]; 
        }
      } 
        
      return *this; 
    }
}
; 
