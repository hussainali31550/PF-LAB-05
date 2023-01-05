#include <iostream>
using namespace std;

int newTime(int hours,int minutes);
main()
{
  int hours;
  int minutes;
  bool catched;

  cout<<"Enter hours : ";
  cin>>hours;
  cout<<"Enter minutes : ";
  cin>>minutes;
  

   catched= newTime(hours,minutes); 
   
   if(catched==1)
	{
	 int newMinutes= minutes + 15;
	 int mint =  newMinutes - 60 ;
         
         int newHours= hours + 1 ;
         cout<<" "<<newHours;
         cout<<" : "<<mint;
         
    }
   if(catched==0)
	{
	 int newMinutes= minutes + 15;
         cout<<" "<<hours;
	 cout<<" : "<<newMinutes;
         
	}



}

  int newTime(int hours,int minutes) 
  {
   int newMinutes= minutes + 15;
 	   if(newMinutes>60)
	{
 	return 1;
}
 	   if(newMinutes==60)
	{
 	return 1;
}
	if(newMinutes<60)
	{ 
	return 0;
}
   
   

}
