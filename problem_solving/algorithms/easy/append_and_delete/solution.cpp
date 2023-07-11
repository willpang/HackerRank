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
    string t;
    cin >> t;
    int k;
    cin >> k;
    
    int flag = -1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != t[i]){
            flag = i;
            break;
        }
    }
    if(flag == -1) flag = s.length();
    
    int count = s.length() - flag + t.length() - flag;
    
    if((k >= count && (k - count) % 2 == 0) || s.length() + t.length() <= k) cout << "Yes";
    else cout << "No";
    
    return 0;
}
