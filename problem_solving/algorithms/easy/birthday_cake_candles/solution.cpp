#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n, h, max = 0, count = 0;
    cin >> n;
    //vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
    //   cin >> height[height_i];
        cin >> h;
        if(h > max){
            max = h;
            count = 1;
        }
        else if(h == max){
            count++;
        }
    }
    
    cout << count;
    return 0;
}
