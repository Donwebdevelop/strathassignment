#include <iostream>

using namespace std;

int main()
{
    int x;

    cout<<"Input the value of x: "<<endl;

    cin>>x;

    switch(x)
    {
    case 1:
        cout<<"It's a busy day"<<endl;
        break;
    case 3:
    case 4:
        cout<<"Good"<<endl;
        break;

    }

}
