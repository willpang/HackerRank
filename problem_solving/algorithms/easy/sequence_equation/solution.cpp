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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int *p = (int *) malloc((n+1) * sizeof(int));
    
    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == p[j]){
                for(int k = 1; k <= n; k++){
                    if(j == p[k]){
                        cout << k << "\n";
                    }
                }
            }
        }
    }
    
    return 0;
}
