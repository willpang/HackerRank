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
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
        cin >> c[c_i];
    }
    
    sort(c.begin(), c.end());
    
    int max = 0;
    
    for(int c_i = 0;c_i < m - 1;c_i++){
        if(c[c_i + 1] - c[c_i] > max) max = c[c_i + 1] - c[c_i];
    }
    
    max /= 2;
    
    if(c[0] - 0 > max) max = c[0] - 0;
    if(n - 1 - c[m - 1] > max) max = n - 1 - c[m - 1];
    
    cout << max;
    
    return 0;
}
