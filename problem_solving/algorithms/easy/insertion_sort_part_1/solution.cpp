#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void printArray(vector <int>  ar) {
    int len = ar.size();
    for(int j = 0; j < len; j++){
        cout << ar[j] << " ";
    }
    cout << endl;
}

void insertionSort(vector <int>  ar) {
    int len = ar.size();
    int com = ar[len - 1];
    for(int i = len - 2; i >= -1; i--){
        if(i == -1){
            ar[i + 1] = com;
            printArray(ar);
            break;
        }
        else if(ar[i] > com){
            ar[i + 1] = ar[i];
            printArray(ar);
        }
        else{
            ar[i + 1] = com;
            printArray(ar);
            break;
        }
    }
}

int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}
