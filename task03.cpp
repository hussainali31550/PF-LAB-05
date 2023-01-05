#include <iostream>

using namespace std;

int isSymmetrical(int digits);
main()
{
  int digits;
  bool symmetrical;


  cout<<"Enter your 3-digit number : ";
  cin>>digits;
   

  symmetrical = isSymmetrical(digits);
  if(symmetrical==1){
  cout<<"Number is symmetrical . ";
  }
  if(symmetrical==0){
  cout<<"Number is non-symmetrical . ";
  }
}


  int isSymmetrical(int digits)
  {
   
   int c = digits % 10;
   int x = digits / 10;
   int b = x % 10;
   int a = x / 10;
  
  
  	if(a==c)
      {
      	 return 1;
      }

  	if(a!=c)
      {
	return 0;
      }

  	

  }
 