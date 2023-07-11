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
        int a, b;
        cin >> a >> b;
        
        int start = ceil(pow(a,0.5));
        int total = 0;
        int end = 0;
        while(end == 0){
            if(pow(start,2) > b) end = 1;
            else{
                total++;
                start++;
            }
        }
        cout << total << endl;
    }
    
    return 0;
}
