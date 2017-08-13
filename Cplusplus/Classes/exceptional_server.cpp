		/* Enter your code here. */
try 
{ 
  Server server; 
  int result = server.compute(A, B); 
  cout <<result <<endl; 
} 
catch (bad_alloc&) 
{ 
  cout <<"Not enough memory" <<endl; 
} 
catch(exception& e) 
{ 
  cout <<"Exception: " <<e.what() <<endl; 
} 
catch(...) 
{ 
  cout <<"Other Exception" <<endl; 
}
