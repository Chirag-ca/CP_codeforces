#include<bits/stdc++.h>
using namespace std;
 
signed main(){
    int ts; cin >> ts;
    while(ts--){
        string s; cin >> s;
        int count = 0;
        string c = "codeforces";
        for(int i = 0; i < 10; i++){
            if(s[i] != c[i]){
                count++;
            }
        }
        cout << count << endl;
    }    
}