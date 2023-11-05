#include <iostream>
using namespace std;

int main()
{
    // int a,b;
    // cout<<"enter the value of a and b"<<endl;
    // cin>>a>>b;

    // if(a>b)
    // cout<<"a is greater";
    // else
    // cout<<"b is greater";

    int m1,m2,m3,m4,m5;
    cout<<"enter the marks"<<endl;
    cin>>m1>>m2>>m3>>m4>>m5;

    if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5 >=40)
    cout<<"passed";

    else if (m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5<40)
    cout<<"faild";

    else if (m1>=40 && m2>=40 && m3>=40 && m4<40 && m5>=40)
    cout<<"faild";

    else if (m1>=40 && m2>=40 && m3<40 && m4>=40 && m5>=40)
    cout<<"faild";

    else if (m1>=40 && m2<40 && m3>=40 && m4>=40 && m5<40)
    cout<<"faild";

    else
    cout<<"faild";
  
}