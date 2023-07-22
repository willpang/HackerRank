#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, Q;
    cin >> N >> Q;
    
    int lastAnswer = 0;
    vector < vector <int> > seqList(N);
    for(int i = 0; i < Q; i++){
        int type, x, y;
        cin >> type >> x >> y;
        if(type == 1){
            seqList[(x ^ lastAnswer) % N].push_back(y);
        }
        else if(type == 2){
            int len = seqList[(x ^ lastAnswer) % N].size();
            lastAnswer = seqList[(x ^ lastAnswer) % N][y % len];
            cout << lastAnswer << endl;
        }
    }
    return 0;
}
