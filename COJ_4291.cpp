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

int main(){
    BOOST;
    string inp, a, b;
    int cnta, cntb;
    while(cin >> inp >> cnta){
        a = inp[0];
        cin >> inp >> cntb;
        b = inp[0];
        if(a == "B" && b == "D" && cntb < cnta*2) printf("Tobby\n");
        else if(b == "B" && a == "D" && cnta < cntb*2) printf("Naebbirac\n");
        if(a == "B" && b == "D" && cntb >= cnta*2) printf("Naebbirac\n");
        else if(b == "B" && a == "D" && cnta >= cntb*2) printf("Tobby\n");
        
        if(a == "D" && b == "C" && cntb < cnta*2) printf("Tobby\n");
        else if(b == "D" && a == "C" && cnta < cntb*2) printf("Naebbirac\n");
        if(a == "D" && b == "C" && cntb >= cnta*2) printf("Naebbirac\n");
        else if(b == "D" && a == "C" && cnta >= cntb*2) printf("Tobby\n");
        
        if(a == "C" && b == "B" && cntb < cnta*2) printf("Tobby\n");
        else if(b == "C" && a == "B" && cnta < cntb*2) printf("Naebbirac\n");
        if(a == "C" && b == "B" && cntb >= cnta*2) printf("Naebbirac\n");
        else if(b == "C" && a == "B" && cnta >= cntb*2) printf("Tobby\n");
        
        if(a == b && cnta > cntb) printf("Tobby\n");
        else if(a == b && cntb > cnta) printf("Naebbirac\n");
        else if(a == b && cnta == cntb) printf("Draw\n");
    }
    return 0;
}