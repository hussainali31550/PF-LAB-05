#include <iostream>
#include <cmath>
using namespace std;

float calculateHeight(float base,float degrees);

main()
{
  float base;
  float radians;
  float degrees;
  float height;
  float answer;
  
  cout<<"Enter the base : ";
  cin>>base;
  cout<<"Enter the angle in degrees : ";
  cin>>degrees;


  answer = calculateHeight(base,degrees);
  cout<<"The height of tree is : "<<answer<<endl;

}

float calculateHeight(float base,float degrees)
{

  float radian = 57.2958 ;

  float radians;

  radians = degrees / radian;

  float angle= tan(radians);
 
  float height= base * angle ;

  return height;
  
}