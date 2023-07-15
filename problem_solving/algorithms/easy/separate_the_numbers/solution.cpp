#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        bool possible;
        int s_len = s.length();
        for(int i = 0; i < s.length()/2; i++){
            int len = i + 1;
            int p = 0;
            possible = true;
            if(s.substr(0,1) == "0"){
                possible = false;
                break;
            }
            long long init = stoll(s.substr(0,len));
            bool p_len = false;
            while(p < s_len - len){
                if(p_len){
                    len++;
                    s_len++;
                    p_len = false;
                }
                if(s.substr(p+len,1) == "0"){
                    possible = false;
                    break;
                }
                if(stoll(s.substr(p+len,len)) - stoll(s.substr(p,len)) != 1){
                    if(stoll(s.substr(p+len,len+1)) - stoll(s.substr(p,len)) != 1){
                        possible = false;
                        break;
                    }
                    else{
                        p_len = true;
                        s_len--;
                    }
                }
                p += len;
            }
            if(possible){
                cout << "YES " << init << endl;
                break;
            }
        }
        if(!possible) cout << "NO" << endl;
    }
    return 0;
}
