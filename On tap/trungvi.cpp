#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[10];
int main ()
{
    ios_base::sync_with_stdio(0);
    for (int i =1 ; i <= 3; i++)
    cin>>a[i];
    sort (a+1, a+4);
    cout<<a[2];
}

