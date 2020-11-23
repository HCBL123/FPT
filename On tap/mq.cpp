#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1005],n,mq,d[10005];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for (int i = 1; i<= n-1; i++)
    {
    	cin>>a[i];
    	d[a[i]]++;
	}
	sort (a+1, a+1+n);
	for (int i = 1; i <=n-1; i++)
	{
		if (d[i] == 0)
		{
			cout<<i;
			return 0;
		}
	}
}

