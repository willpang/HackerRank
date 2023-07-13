#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long p, q;
    cin >> p >> q;
    
    int count = 0;
    for(long long i = p; i <= q; i++){
        if(i <= 3){
            if(i == 1) {
                cout << 1 << " ";
                count++;
            }
            i = 8;
        }
        else{
            long long sq = pow(i,2);
            string temp = to_string(sq);
            if(stoll(temp.substr(0,temp.length()/2)) + stoll(temp.substr(temp.length()/2)) == i){
                cout << i << " ";
                count++;
            }
        }
    }
    
    if(count == 0) cout << "INVALID RANGE";
    
    return 0;
}
