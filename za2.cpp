#include <iostream>

using namespace std;

int main() {
    int i=0, k=0;
    char str[100]="jfgdshj rffd fg";
    char str2[100]="jkntg fgrffdghik fe";
    while(str[i]!='\0')
    {
        i++;
    }
    while(str2[k]!='\0')
    {
        k++;
    }
    cout<<i<<" "<<k<<endl;
    if(k>=i)
    {
        while(i!=0)
        {
            if(str[i]==str2[i])
                cout<<str[i]<<" nomer "<<i<<endl;
            i--;
        }
    }
    if(k<i)
        {
        while(k!=0)
        {
            if(str[k]==str2[k])
                cout<<str[k]<<" nomer "<<k<<endl;
            k--;
        }
    }
    return 0;
}
