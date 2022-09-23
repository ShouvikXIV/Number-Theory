#include <bits/stdc++.h>
using namespace std;

// generates all the prime numbers till 50000000. Then returns if a number is prime or not.

long long int n = 50000000;
std::vector<bool> v(n);

void sieve()
{
    for (long long int i = 2; i <=n ; ++i)
    {
        /* code */
        v[i] = true;
    }
    v[0] = false;
    v[1] = false;
    for (long long int i = 2; i*i <= n; i++)
    {
        /* code */
        if(v[i]==true)
        {
            for (long long int j = 2; j*i <=n ; j++)
            {
                /* code */
                v[i*j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int x;
    cin>>x;
    cout<<v[x];


    
    return 0;
}