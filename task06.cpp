#include <iostream>
using namespace std;

int multiple(int num1);
main()
{
  int num1;
  int answer;
  
  cout<<"Enter your number : ";
  cin>>num1;
  
  answer = multiple(num1);
  cout<<"Your Answer is : "<<answer;

}  

int multiple(int num1)
{
   int multiply = num1 * 5;
   return multiply;
}