#include <iostream>
using namespace std;



int main()
{
    double g, t, n;
   cout<<"Enter your gross pay: "<<endl;
   cin>>g;


   if(g>=40000){
    t = (3*g)/10;
   }

   else if(g>=30000 & g<40000){
    t = 0.25*g;
   }

   else if(g>=20000 & g<30000){
    t = 0.15*g;
   }

   else if(g>=10000 & g<20000){
    t = 0.10*g;
   }

    else if(g<10000){
    t = 0*g;
   }

    n = g-t;

    cout<<"Your tax due is: "<<t<<" and your net pay is: "<<n<<endl;

    return 0;
}
