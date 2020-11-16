#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100005];
ll n;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin>>n; // So luong phan tu
    for (int i = 1; i <= n; i++) cin>>a[i]; // Nhap a
    sort (a+1, a+1+n); // Sap xep a
    for (int i = 2; i <= n; i++)
    {
    	a[1] = 1;
    	if (a[i] > a[i-1])
    	{
    		a[i] = a[i-1] + 1;
    	}
    }
    cout<<a[n]+1;
}

