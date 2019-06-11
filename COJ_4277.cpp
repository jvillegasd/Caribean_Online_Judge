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
bool prime[9999999];
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

void sieve(){
    memset(prime,1,sizeof(prime));
    prime[0]=prime[1]=0;
    for(int i = 2; i*i<=100000000; i++){
        if(prime[i]) for(int j = i*i; j<=9999999; j+=i) prime[j]=0;
    }
}

int main(){
    BOOST;
    sieve();
    string n;
    int k, flag = 0;
    while(cin>>k>>n){
        flag=0;
        for(int i = 0; i<n.length(); i+=k){
            if(!prime[stoi(n.substr(i, k))]){
                flag=1;
                printf(":(\n");
                break;
            }
        }
        if(!flag) printf(":)\n");
    }
    return 0;
}