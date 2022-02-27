#include <iostream>

using namespace std;

int main()
{
    int a, b=0, h=1;
    cin>>a;
    while(a>0)
    {
        b+=(a%2)*h;
        a/=2;
        h*=10;
    }
    cout<<b;
    return 0;
}
