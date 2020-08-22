#include <iostream>
using namespace std;



int main()
{
    float a,b,c;
    cout<<"Enter the 1st number: "<<endl;
    cin>>a;
    cout<<"Enter the 2nd number: "<<endl;
    cin>>b;

    if(a>b){
        c = a-b;
    }
    else if (b>a){
        c = a/b;
    }
    else{
        c = a+b;
    }

    cout<<c;



    return 0;
}
