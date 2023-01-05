#include <iostream>
#include <cmath>
using namespace std;
 

main()
{
  float num1;
  float num2;
  float greater;
  float minimum;
  float power;
  float squareRoot;
  float cubeRoot; 
  float next; 
  float cubeRoot; 

  cout<<"Enter first number : ";
  cin>>num1;
  cout<<"Enter second number : ";
  cin>>num2;
 

  greater = max(num1,num2);
  cout<< greater << " is Greater number! "<<endl;
  minimum = min(num1,num2);
  cout<< minimum << " is Minimum number! "<<endl;
  power = pow(num1,num2);
  cout<< power << " is power of "<<num1<<endl;
  squareRoot = sqrt(num1);
  cout<< squareRoot << " is the square root of "<<num1<<endl;
  cubeRoot = cbrt(num2);
  ceil()
  floor()
}
