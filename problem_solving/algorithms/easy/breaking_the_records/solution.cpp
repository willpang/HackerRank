#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    // Complete this function
    int min = s[0], max = s[0];
    vector <int> break_record (2,0); // first high, second low
    for(int i=1; i<s.size(); i++){
        if(s[i] > max){
            max = s[i];
            break_record[0]++;
        }
        else if(s[i] < min){
            min = s[i];
            break_record[1]++;
        }
    }
    return break_record;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
        cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
