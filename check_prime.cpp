#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i,prime=0;
    cout<< "enter number"<< endl;
    cin>> n;

    if(n>=2)
    {
        for(i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
            prime=1;
        }
    }
    else
    prime=1;

    if(prime==0)
    cout<<"it is prime";
    else
    cout<<"it is not prime";


    return 0; 

    
}