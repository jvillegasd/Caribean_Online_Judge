#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    string input;
    scanf("%d", &tc);
    while(tc--){
        cin >> input;
        if(input.size() % 2) printf("no\n");
        else{
            bool enter = false;
            for(int i = 0; i < input.size() / 2; i++){
                if(input[i] == input[input.size() - 1 - i]){
                    enter = true;
                    break;
                }
            }
            if(!enter) printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}