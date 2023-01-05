#include <iostream>
#include <cmath>
using namespace std;

float SquareRoot(float a,float b,float c);

main()
 {
  float a;
  float b;
  float c;
  float x1;
  float x2;
  float SquareRoot1;

  cout<<"Enter the value of A :";
  cin>>a;
  cout<<"Enter the value of B :";
  cin>>b;
  cout<<"Enter the value of C :";
  cin>>c;
  
  SquareRoot1 =  SquareRoot(a,b,c);
  x1= (-b + SquareRoot1)/(2*a);
  cout<<"Value of first X : "<<x1<<endl;


  SquareRoot1 =  SquareRoot(a,b,c);
  x2= (-b - SquareRoot1)/(2*a);
  cout<<"Value of second X : "<<x2<<endl;


  }
   

  
  float SquareRoot(float a,float b,float c)
  {
	float power = pow (b,2);
	float minus = power - (4*a*c);
	float squareRoot1= sqrt(minus);

	return squareRoot1;
  }

