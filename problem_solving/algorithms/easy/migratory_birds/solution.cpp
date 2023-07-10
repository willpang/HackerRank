#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> types(n);
    for(int types_i = 0; types_i < n; types_i++){
        cin >> types[types_i];
    }
    // your code goes here
    int total[5] = {0,0,0,0,0};
    
    for(int types_i = 0; types_i < n; types_i++){
        switch(types[types_i]){
            case 1: total[0]++; break;
            case 2: total[1]++; break;
            case 3: total[2]++; break;
            case 4: total[3]++; break;
            case 5: total[4]++; break;
        }
    }
    cout << distance(total, max_element(total, total + 5)) + 1;
    
    return 0;
}
