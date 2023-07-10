#include <bits/stdc++.h>

using namespace std;

int getWays(vector < int > squares, int d, int m){
    // Complete this function
    int total, count = 0;
    for(int i = m - 1; i < squares.size(); i++){
        total = 0;
        for(int j = 0; j < m; j++){
            total += squares[i - j];
        }
        if(total == d) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
        cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = getWays(s, d, m);
    cout<<result<<endl;
    return 0;
}
