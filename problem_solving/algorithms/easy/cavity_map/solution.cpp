#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0; grid_i < n; grid_i++){
        cin >> grid[grid_i];
    }
    
    for(int grid_i = 1; grid_i < n - 1; grid_i++){
        for(int grid_j = 1; grid_j < n - 1; grid_j++){
            if(grid[grid_i][grid_j] > grid[grid_i + 1][grid_j] && grid[grid_i][grid_j] > grid[grid_i][grid_j + 1])
                if(grid[grid_i][grid_j] > grid[grid_i - 1][grid_j] && grid[grid_i][grid_j] > grid[grid_i][grid_j - 1])
                    grid[grid_i][grid_j] = 'X';
        }
    }
    
    for(int grid_i = 0; grid_i < n; grid_i++){
        cout << grid[grid_i] << endl;
    }
    
    return 0;
}
