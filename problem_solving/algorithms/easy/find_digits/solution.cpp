#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int find_d(int number){
    int digit, n_number = number, flag=0;
    
    for(int i=1000000000;i>=1;i=i/10){
        if(number > i){
            digit = n_number / i;
            if(digit!=0)
                if(number%digit == 0) flag++;
            n_number = n_number%i;
        }
    }
    
    return flag;
}

int main() {
    int n, number;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> number;
        cout << find_d(number) << endl;
    }
    
    return 0;
}
