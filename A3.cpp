#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
void compute()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
    cout<<i/2-(i+2)/3+1<<"\n";
        
    }
    
}
signed main()
{
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t = 1;
    // cin>>t;
    while(t--)compute();
    return 0;
}
