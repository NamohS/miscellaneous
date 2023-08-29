#include <iostream>
using namespace std;
main()
{
    int prn;
    cout<<"enter prn :";
    cin>>prn;
    int dig[5];

    for(int i=0;i<5;i++)
    {
        dig[i]=prn%10;
        prn=int(prn/10);
        
    }
    for(int i=0;i<5;i++)
    {
        
        cout<<dig[4-i]<<endl;
    }

}
