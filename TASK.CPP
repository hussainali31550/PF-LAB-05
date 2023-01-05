#include <iostream>
using namespace std;

float division(float num1,float num2);
int max(int num1,int num2);
main()
{

float num1,num2,total;
cout<<"Enter first number : ";
cin>>num1;
cout<<"Enter second number : ";
cin>>num2;


total = max(num1,num2);
cout<<"Greater number is : "<<total<<endl;
}



float division(float num1,float num2)
  {
	float divide=num1/num2;
	return divide;
  }


int max(float num1,float num2)
  {
  int maximum;
    if(num1>num2){
	return num1;}
   
    if(num2>num1){
	return num2;}

    
	return 0;

   }