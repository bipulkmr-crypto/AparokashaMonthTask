#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define gl(n) scanf(%d,&n)
#define pi(n) printf(%d,n)
#define pl(n) printf(%lld,n)
ll big(ll a,ll x,ll n)
{
    a%=n;
    ll res=1;
    while(x>0)
    {
        if(x&1)
        {
            res=(res*a)%n;
        }
        a=a*a%n;
        x>>=1;

    }
    return res;
}
int main()
{
    int a,x,n;
    cin>>a>>x>>n;
    ll ans=big(a,x,n);
    cout<<ans<<endl;
}