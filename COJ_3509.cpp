#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    long long int n, r, sum = 0;
    scanf("%d", &tc);
    while(tc--){
        scanf("%lld %lld", &n, &r);
        sum = r;
        for(int i = 0; i < n; i++) sum = sum + sum/(n-1);
        printf("%lld\n", sum);
    }
    return 0;
}