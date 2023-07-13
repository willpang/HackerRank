#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        
        int tc = n / c; // total chocolate
        int tw = tc; // total wrapper
        while(tw >= m){
            tc += tw / m;
            tw = (tw / m) + (tw % m);
        }
        cout << tc << endl;
    }
    return 0;
}
