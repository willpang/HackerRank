#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    // Complete this function
    sort(keyboards.begin(),keyboards.end());
    sort(drives.begin(),drives.end());
    
    int max = -1, f_k = 0, f_d = drives.size() - 1;
    
    while(f_k < keyboards.size() && f_d >= 0){
        int total = keyboards[f_k] + drives[f_d];
        
        if(total <= s){
            if(total > max) max = total;
            f_k++;
        }
        else{
            f_d --;
        }
    }
    
    return max;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
        cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
        cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}
