#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int pos(int num){
    if(num<0) return num * -1;
    else return num;
}

int number(string word, int initial){
    return word[initial];
}

int main() {
    int n, flag=1;
    string word;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> word;
        for(int j=1;j<word.length();j++){
            if(pos(number(word,j)-number(word,j-1)) != pos(number(word,word.length()-1-j)-number(word,word.length()-j))){
                flag = 0;
                break;
            }
        }
        
        if(flag==1) cout << "Funny" << endl;
        else cout << "Not Funny" << endl;
        flag = 1;
    }
    
    return 0;
}
