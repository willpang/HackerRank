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
    int N;
    cin >> N;
    vector<int> B(N + 1);
    for(int B_i = 0;B_i < N;B_i++){
        cin >> B[B_i];
    }
    
    int total = 0;
    
    for(int B_i = 0;B_i < N;B_i++){
        if(B[B_i] % 2 == 1){
            total += 2;
            B[B_i + 1]++;
        }
    }
    
    if(B[N] == 1) cout << "NO";
    else cout << total;
    
    /* Other interesting solution // found in discussion
        int total = 0;
        int sum = 0;
        
        for(int B_i = 0;B_i < N;B_i++){
            sum += B[B_i];
            if(sum % 2 == 1){
                total += 2;
            }
        }

        if(sum % 2 == 1) cout << "NO";
        else cout << total;
    */
    
    return 0;
}
