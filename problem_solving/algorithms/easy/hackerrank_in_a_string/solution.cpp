#include <bits/stdc++.h>

using namespace std;

string containHackerrank(string s){
    int flag = 0, flag_h = 0;
    string h = "hackerrank";
    while(flag < s.length()){
        if(s[flag] == h[flag_h]){
            flag_h++;
            if(flag_h == h.length()) return "YES";
        }
        flag++;
    }
    return "NO";
}

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        cout << containHackerrank(s) << endl;
    }
    return 0;
}
