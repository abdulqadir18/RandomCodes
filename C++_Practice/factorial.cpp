#include <iostream>
using namespace std;
int main()
{
    int n,i,f;
    cout<< "enter n"<< endl;
    cin>> n;

    //general
    f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<< "factorial of "<< n<< "is ="<< f<< endl;

    return 0;
}