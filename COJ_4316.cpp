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

lli lcm(lli a, lli b){
    return (a*b)/gcd(a, b);
}

int binsearch(int n, lli subs[], lli sum){
    int l = 0, r = n-1, mid;
    while(l<=r){
        mid = (l+r)/2;
        if(subs[mid]==sum) return mid;
        if(subs[mid]>sum) l = mid+1;
        else r = mid-1;
    }
    return -1;
}

int main(){
    int n;
    lli s;
    while(scanf("%d %lld", &n, &s) != EOF){
        lli a[n+1], subs[n+1];
        int flag = 0;
        for(int i = 0; i < n; i++) scanf("%lld", &a[i]);
        subs[n-1]=a[n-1];
        for(int i = n-2; i >= 0; i--) subs[i]=subs[i+1]+a[i];
        for(int i = 0, j; i < n; i++){
            j = binsearch(n, subs, subs[i]-s);
            if(j != -1){
                printf("%d %d\n", i+1, j);
                flag=1;
                break;
            }else if(j == -1 && subs[i] == s){
                printf("%d %d\n", i+1, i+1);
                flag=1;
                break;
            }
        }
        if(!flag) printf("-1\n");
    }
    return 0;
}