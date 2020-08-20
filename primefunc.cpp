#include <iostream>
#include <stdlib.h>/* this lib is imported so as to use the srand() and rand() function */
#include <ctime>/* this lib is imported so as to use the time() function*/

using namespace std;


int randnum()
{
    srand(time(0));  /* What srand does is that it provides a seed number for the rand() function to generate numbers from */

    /* rand() function generates a random number and returns it. so we can now store that number in a variable*/

    int randomnumber = rand()% 300 + 1;  /* To generate a number between 1 and 300 we use the modulo of the returned value by the range span (300) and add the initial value of the range (1)*/
    return randomnumber;
}

bool primechecker(int n)
{
    bool isprime = true;

    if(n==0 || n==1){
        isprime = false;
    }

    else {
        for(int i=2; i<= n / 2; i++){
            if(n % i == 0){
                isprime = false;
                break;
            }

        }
    }

    return isprime;
}

    int main()
    {
        int number = randnum();
        bool check = primechecker(number);
        string validation = " ";

        if(check){
            validation = " is ";
        }
        else{
            validation = " is not ";
        }

        cout<<"The random number generated was: "<<number<<endl;
        cout<<number<<validation<<"a prime number."<<endl;
    }







