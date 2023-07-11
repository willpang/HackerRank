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
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    
    int temp;
    for(int r=0;r<k;r++){
        temp = a[a.size()-1];
        a.insert(a.begin(),temp);
        a.pop_back();
    }
    
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        cout << a[m] << "\n";
    }
    
    return 0;
}
