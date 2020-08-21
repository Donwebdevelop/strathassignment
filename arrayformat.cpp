#include <iostream>
using namespace std;

int arrayf(int n[],int l)  /* This user defined function takes 2 parameters, the array and the size of the array*/
{
    int arraytwo[l] = {};  /* Duplicate array is needed as reference while rearranging the first array. It has to be same size as first one*/

    for(int i = 0;i < l;i++){

        arraytwo[i] = n[i];

     }
     int j = l;
     for(int i = 0;i <= l;i++){  /* We use a for loop to place the last item in the duplicate array to be the first item in the original array*/

        n[i] = arraytwo[j];

        j--;
     }
     for(int i = 1;i <= l;i++){

        cout<<n[i];
     }



}

int main()
{
     cout<<"Enter the size of your array: ";
     int m = 0;
     int b = 0;
     cin>> m;
     int myArray[m] = {};

     for(int i = 0;i< m;i++){
        cout<<"Enter number "<<i+1<<" in the list: ";
        cin>> b;
        myArray[i] = b;

     }

    arrayf(myArray,m);


}
