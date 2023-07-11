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
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
        cin >> c[c_i];
    }
    
    sort(c.begin(), c.end());
    
    int pair = 0;
    for(int c_i = 1;c_i < n;c_i++){
        if(c[c_i] == c[c_i - 1]){
            pair++;
            c_i++;
        }
    }
    
    cout << pair;
    
    return 0;
}
