#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int search_idx(vector <int> v, int number){
    for(int i = 0; i < v.size(); i++){
        if(v[i] == number) return i;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    for(int test = 0; test < t; test++) {       
        int m, n;
        cin >> m >> n;
        vector <int> v_cost;
        for (int i = 0; i < n; i++) {
            int cost;
            cin >> cost;
            
            if(find(v_cost.begin(), v_cost.end(), m - cost) != v_cost.end()){
                int idx = search_idx(v_cost, m - cost);
                cout << min(i, idx) + 1 << " " << max(i, idx) + 1 << endl;
            }
            else v_cost.push_back(cost);
        }
    }

}

