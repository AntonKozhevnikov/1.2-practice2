#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long a, b=0, i=0;
    cin>>a;
    while(a>0)
    {
        b+=((a%10)*pow(2,i));
        a/=10;
        i++;
    }
    cout<<b;
    return 0;
}
