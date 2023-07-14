#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    
    for(int i = 0;i < t;i++){
        int n, a, b;
        cin >> n >> a >> b;
        int low = a <= b ? a : b;
        int high = a >= b ? a : b;
        if(low == high) cout << (n - 1) * low << " ";
        else{        
            int a_0 = n - 1;
            int b_0 = 0;

            while(a_0 >= 0){
                cout << a_0 * low + b_0 * high << " ";
                a_0--;
                b_0++;
            }
        }
        cout << endl;
    }
    
    return 0;
}
