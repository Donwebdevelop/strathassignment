#include <iostream>
using namespace std;

float calc_vol(float a,float b,float c)
{
    return a*b*c;
}



int main()
{
    float a, b, c, d;
    cout<<"Enter the length of the cube: "<<endl;
    cin>>a;
    cout<<"Enter the width of the cube: "<<endl;
    cin>>b;
    cout<<"Enter the height of the cube: "<<endl;
    cin>>c;

    d = calc_vol(a,b,c);


    cout<<"The dimensions of the cube are: "<<endl;
    cout<<"Length: "<<a<<"\nWidth: "<<b<<"\nHeight: "<<c<<endl;
    cout<<"The volume is: "<<d<<endl;




    return 0;
}
