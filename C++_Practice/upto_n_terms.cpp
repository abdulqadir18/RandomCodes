#include <iostream>
using namespace std;
int main()
{
    int n,i,sum;
    cout<< "enter n"<< endl;
    cin>> n;

    //general
    sum=0;
    for(i=0;i<=n;i++)
    {
        cout<< i;
        sum=sum+i;
    }
    cout<< "sum of general"<< sum<< endl;

    //even
    sum=0;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<< i;
            sum=sum+i;
        }
    }
    cout<< "sum of even"<< sum<< endl;

    //odd
    sum=0;
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<< i;
            sum=sum+i;
        }
    }
    cout<< "sum of odd"<< sum<< endl;

    return 0;
}