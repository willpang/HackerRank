#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
long solve(long n) {
    long zeroBit = 0;
    while(n){
        if(!(n & 1)) zeroBit++;
        n >>= 1;
    }
    
    return pow(2,zeroBit);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = solve(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
