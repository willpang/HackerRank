#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int min(vector<int>& width, int i, int j){
    int min = 3;
    for(int a0 = i; a0 <= j; a0++){
        if(width[a0] < min) min = width[a0];
    }
    return min;
}

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
        cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        cin >> i >> j;
        cout << min(width,i,j) << "\n";
    }
    return 0;
}
