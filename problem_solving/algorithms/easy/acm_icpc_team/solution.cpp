#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
        cin >> topic[topic_i];
    }
    
    int max = 0;
    int team = 0;
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            int point = 0;
            for(int k = 0; k < m; k++){
                if(topic[i][k] == '1' || topic[j][k] == '1'){
                    point++;
                }
            }
            if(point > max){
                max = point;
                team = 1;
            }
            else if(point == max){
                team++;
            }
        }
    }
    
    cout << max << endl << team;
    
    return 0;
}
