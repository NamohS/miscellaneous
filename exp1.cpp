#include <iostream>
using namespace std;

main()
{   int myIntVar;
    cout<<"myIntVar= ";
    cin>>myIntVar;
    float myFloatVar;
    cout<< "myFloatVar=";
    cin>>myFloatVar;
    string myStrVar ;
    cout<<"myStrVar =";
    cin>>myStrVar;
    char myCharVar;
    cout<<"myCharVar =";
    cin>>myCharVar;

    cout<<endl<<endl"myIntVar= " << myIntVar << endl;
    cout<<"size of myIntVar= " << sizeof(myIntVar) <<" bytes"<< endl;
    cout<< "myFloatVar="<< myFloatVar<< endl;
    cout<< "size of myFloatVar="<< sizeof(myFloatVar)<<" bytes"<< endl;
    cout<<"myStrVar ="<< myStrVar<< endl ;
    cout<<"size of myStrVar ="<< sizeof(myStrVar)<<" bytes"<< endl ;
    cout<<"myCharVar= "<<myCharVar<< endl<< endl;
    cout<<"size of myCharVar= "<<sizeof(myCharVar)<<" bytes"<< endl;
    const int myNum = 15; // myNum will always be 15
    cout<< "myNum constant = "<<myNum;
    bool A=true;
    double c=8.885868;
    short int=15;
    long int=70;
    cout<<sizeof(bool);
    return 0;

}