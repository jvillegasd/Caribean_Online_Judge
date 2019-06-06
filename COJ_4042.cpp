#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc, ans;
    double a, b, c;
    scanf("%d", &tc);
    while(tc--){
        ans = 0;
        for(int i = 0; i < 5; i++){
            scanf("%lf %lf %lf", &a, &b, &c);
            if(a+b==c || a-b==c || a*b==c || (b!=0 && a/b==c)) ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}