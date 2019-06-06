#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define pob pop_back
#define fp first
#define sp second
#define mp make_pair
#define ins insert
#define uEdge(u, v) g[u].pb(v), g[v].pb(u)
#define uwEdge(u, v, w) g[u].pb({v, w}), g[v].pb({u, w})
#define dEdge(u, v) g[u].pb(v)
#define dwEdge(u, v, w) g[u].pb({v, w})
#define BOOST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define minHeap int, vector<int>, greater<int>

using namespace std;
typedef long long int lli;
typedef pair<int, int> pii;
vector<int> g[0];

lli gcd(lli a, lli b){
    if(b == 0) return a;
    a%=b;
    return gcd(b, a);
}

int main(){
    int tc, n;
    lli dp[10010];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4; i <= 10000; i++) dp[i] = dp[i-1]+3;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &n);
        printf("%d\n", dp[n]);
    }
    return 0;
}