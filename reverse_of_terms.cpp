#include <iostream>
using namespace std;
int main()
{
    int n,r=0,a;
    cout<< "enter a number"<< endl;
    cin >> n;

    while(n!=0)
    {
        a=n%10;//gives unit place digit
        r=r*10 + a;//equation that reverses
        n=n/10;//removes that unit digit
    }
    cout<< "reverse digit is "<< r;

    return 0;
}