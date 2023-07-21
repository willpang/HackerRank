#include <bits/stdc++.h>

using namespace std;

string solve(vector < int > a){
    // Complete this function
    int i = 0;
    int j = a.size() - 1;
    int front = 0;
    int back = 0;
    while(i < j){
        if(front + a[i] <= back + a[j]){
            front += a[i];
            i++;
        }
        else{
            back += a[j];
            j--;
        }
    }
    if(front == back) return "YES";
    else return "NO";
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
            cin >> a[a_i];
        }
        string result = solve(a);
        cout << result << endl;
    }
    return 0;
}
