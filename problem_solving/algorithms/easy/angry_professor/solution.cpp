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
        int k;
        cin >> n >> k;
        int arrival_n;
        int present = 0;
        for(int a_i = 0;a_i < n;a_i++){
            cin >> arrival_n;
            if(arrival_n <= 0) present++;
        }
        if(present < k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
