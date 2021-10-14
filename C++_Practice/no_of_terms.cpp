#include <iostream>
using namespace std;
int main()
{
    int n, count;
    cout<< "enter your number"<< endl;
    cin>> n;
    count=0;

    while(n!=0)
    {
        count=count+1;
        n=n/10;//

    }

    cout<< "no. of digits is "<< count;

    return 0;
}