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
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
        cin >> c[c_i];
    }
    
    int tot_thunder = 0;
    
    for(int c_i = 0;c_i < n;c_i += k){
        if(c[c_i] == 1) tot_thunder += 2;
    }
    
    cout << 100 - (n/k) - tot_thunder;
    
    return 0;
}
