#include <iostream>
using namespace std;

int OddOrEven(int digits);
main()
{
  int digits;
  bool answer;


  cout<<"Enter your 5-digit number : ";
  cin>>digits;
   
  answer=OddOrEven(digits);
  if(answer==1)
  {	cout<<"Oddish "<<endl;
  }


  if(answer==0)
  {	cout<<"Evenish "<<endl;
  }

}

  
int OddOrEven(int digits)
  {
   
   int e = digits % 10;
   int eLeft = digits / 10;
   int d = eLeft % 10;
   int dLeft = eLeft / 10;
   int c = dLeft % 10 ;
   int cLeft = dLeft / 10 ;
   int b = cLeft % 10 ;
   int a = cLeft / 10 ;

   int sumOfDigits = a+b+c+d+e;
   int modulusOfDigits =  sumOfDigits % 2; 
  
    if( modulusOfDigits == 1)
  {	
	return 1;

  }

      if( modulusOfDigits == 0)
  {return 0;	
  }
  

       }

  	

