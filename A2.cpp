#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
 
ll dp[1000001];
 
const int MOD = (int)1e9 + 7;
 
int main() {
	int n=2,x;
    cin>>x;
	// cin >> n >> x;
	vi coins = {2,3};
	// for (int i = 0; i < n; i++) { cin >> coins[i]; }
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int weight = 0; weight <= x; weight++) {
			if (weight - coins[i - 1] >= 0) {  // prevent out of bounds cases
				dp[weight] += dp[weight - coins[i - 1]];
				dp[weight] %= MOD;
			}
		}
	}
    for (int i = 0; i < x; i++)
    {
        cout<<dp[i]<<"\n";
    }
    
	// cout << dp[x] << '\n';
}
