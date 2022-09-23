#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,n;
    cin>>a>>n;
    int k = 1;
    while(n>0)
    {
        /* code */
        if(n%2!=0)
        {
            k*=a;
            n-=1;
        }
        else
        {
            a*=a;
            n/=2;
        }
    }

    cout<<k;
   
    return 0;
}