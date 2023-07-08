#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tot, num, pos=0, neg=0, net=0;
    cin>>tot;
    for(int i=0;i<tot;i++){
        cin>>num;
        if(num>0) pos++;
        else if(num==0) net++;
        else neg++;
    }
    cout<<(float)pos/tot<<endl;
    cout<<(float)neg/tot<<"\n";
    cout<<(float)net/tot;
    return 0;
}
