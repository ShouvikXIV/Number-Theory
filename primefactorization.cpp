#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for (int i = 2; i*i <= n; ++i)
    {
    	/* code */
    	if(n%i==0)
    	{
    		int count = 0;
    		while(n%i==0)
    		{
    			count+=1;
    			n/=i;
    			
    		}
    		cout<<i<<'^'<<count<<'\n';
    	}
    	
    }
    if(n>1)
    	{
    		cout<<n<<'^'<<1<<'\n';
    	}
   
    return 0;
}