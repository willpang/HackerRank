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
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
        
        bool initial_happy = true;
        bool happy = true;
        bool blank = false;
        int bug[26] = {0};
        for(int i = 0;i < n;i++){
            if(b[i] == '_') blank = true;
            else bug[b[i] - 65]++;
            
            if(b[i] != b[i - 1] && b[i] != b[i + 1]) initial_happy = false;
        }
        
        for(int i = 0;i < 26;i++){
            if(bug[i] == 1) happy = false;
        }
        
        if(happy == true && initial_happy == false && blank == false) happy = false;
        
        string answer = happy ? "YES" : "NO";
        cout << answer << endl;
    }
    return 0;
}
