#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    int character[27] = {0};
    int flag = -1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != s[i+1]){
            if(i - flag + 1 > character[s[i] - 'a' + 1]){
                character[s[i] - 'a' + 1] = i - flag;
            }
            flag = i;
        }
    }
    
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        // your code goes here
        bool ex = false;
        for(int i = 1; i <= 26; i++){
            if(x % i == 0){
                if(x / i <= character[i]){
                    ex = true;
                    break;
                }
            }
        }
        if(ex) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
