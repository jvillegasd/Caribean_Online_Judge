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

int main(){ //Precalcular
    lli pc[15];
    int tc, n;
    pc[0] = 1;
    pc[1] = 3;
    pc[2] = 15;
    pc[3] = 75;
    pc[4] = 391;
    pc[5] = 2065;
    pc[6] = 11091;
    pc[7] = 60215;
    pc[8] = 330003;
    pc[9] = 1820869;
    pc[10] = 10103153;
    pc[11] = 56313047;
    pc[12] = 315071801;
    pc[13] = 1768489771;
    pc[14] = 9953853677;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d", &n);
        printf("%lld\n", pc[n]);
    }
    return 0;
}
