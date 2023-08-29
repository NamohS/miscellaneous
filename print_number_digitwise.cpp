#include <iostream>
using namespace std;
main()
{
    int prn;
    cout<<"enter prn :";
    cin>>prn;

    for(int i=0;i<5;i++)
    {
        int dig=prn%10;
        prn=int(prn/10);
        cout<<dig<<endl;
    }

}
