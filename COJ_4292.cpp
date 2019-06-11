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
typedef pair<lli, lli> pll;
vector<int> g[0];

lli gcd(lli a, lli b){
    if(b == 0) return a;
    a%=b;
    return gcd(b, a);
}

lli lcm(lli a, lli b){
    return (a*b)/gcd(a, b);
}

int binsearch(int n, lli arr[], lli sum){
    int l = 0, r = n-1, mid;
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid]==sum) return mid;
        if(arr[mid]<sum) l = mid+1;
        else r = mid-1;
    }
    return -1;
}

bool cmp(const pll &a, const pll &b){
    if(a.sp==b.sp) return a.fp<b.fp;
    return a.sp>b.sp;
}

int main(){
    BOOST;
    int n, k, l, r;
    lli cnt;
    vector<pll> ans;
    scanf("%d %d", &n, &k);
    lli a[n+1], s[k+1];
    for(int i = 0; i < n; i++) scanf("%lld", &a[i]);
    for(int i = 0; i < k; i++) scanf("%lld", &s[i]);
    sort(a,a+n);
    for(int i = 0; i < k; i++){
        cnt=0,l=0,r=n-1;
        while(l<r){
            if(a[l]+a[r]==s[i])cnt++, l++, r--;
            else if(a[l]+a[r]<s[i])l++;
            else r--;
        }
        ans.pb({s[i],cnt});
    }
    sort(ans.begin(), ans.end(), cmp);
    for(auto pi : ans) printf("%lld %lld\n", pi.fp, pi.sp);
    return 0;
}
