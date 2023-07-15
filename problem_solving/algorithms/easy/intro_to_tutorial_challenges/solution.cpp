#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int V,n,num;
    
    cin >> V;
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> num;
        if(num == V){
            cout << i;
            break;
        }
    }
    
    return 0;
}
