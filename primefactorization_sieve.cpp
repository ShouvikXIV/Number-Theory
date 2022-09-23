#include <bits/stdc++.h>
using namespace std;

long long int n = 50000000;
std::vector<int> v(n);

void sieve()
{
    for (long long int i = 2; i <=n ; ++i)
    {
        /* code */
        v[i] = -1;
    }
    v[0] = 0;
    v[1] = 1;
    for (long long int i = 2; i <= n; i++)
    {
        /* code */
        if(v[i]==-1)
        {
            v[i] = i;
            for (long long int j = 2; j*i <=n ; j++)
            {
                /* code */
                if(v[i*j]==-1)
                {
                    v[i*j] = i;    
                }
                
            }
        }
    }
    // for(int i:v)
    // {
    //     cout<<i<<' ';
    // }
}

void primeFactors(int k)
{
    while(k>1)
    {
        cout<<v[k]<<' ';
        k/=v[k];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int k;
    cin>>k;
    primeFactors(k);
   
    return 0;
}