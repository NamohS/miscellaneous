#include <iostream>
using namespace std;
main()
{
   int marks[5];
   int avg=0;
   for(int i=0;i<5;i++)
   {
    cout<<"enter marks in subject :">>i>>endl;
    cin>>marks[i];
    avg=avg+marks[i];
   }
   avg=int(avg/5);
   if(avg<=100&&avg>=90)
   cout<<"O";
   else if(avg<90&&avg<=85)
   cout<<"A+";
   else if(avg<85&&avg>=75)
   cout<<"A";
   else if(avg<75&&avg>=65)
   cout<<"B+";
   else if(avg<65&&avg>=55)
   cout<<"B";
   else if(avg<55&&avg>=40)
   cout<<"Pass";
   else
   cout<<"Fail";

}
