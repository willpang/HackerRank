#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }
    sort(arr.begin(),arr.end());
    
    int curr = arr[0];
    int p_curr = 0;
    
    for(int arr_i = 0;arr_i <= n;arr_i++){
        if(arr[arr_i] != curr){
            cout << n - p_curr << endl;
            curr = arr[arr_i];
            p_curr = arr_i;
        }
    }
    
    return 0;
}
