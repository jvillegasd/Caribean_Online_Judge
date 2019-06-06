#include <bits/stdc++.h>

using namespace std;

int main(){
    int b, n, emp[150], sum = 0, ans = 1;
    scanf("%d %d", &b, &n);
    for(int i = 0; i < n; i++) scanf("%d", &emp[i]), sum+=emp[i];
    sort(emp, emp + n);
    if(b <= sum){
        for(int i = n - 1; i >= 0; i--){
            if(b + emp[i] <= sum - emp[i]) ans++, b+=emp[i], sum-=emp[i];
            else{
                ans++;
                break;
            }
        }
    } 
    printf("%d", ans);
    return 0;
}