#include <iostream>
using namespace std;
main()
{
    int a,i ;
    cout<<"enter a number:";
    cin>>a;
    i=1;
    while(i<=20)
    {
        cout<<a<<"x"<<i<<"= "<<i*a<<endl;
        i++;
    }
}