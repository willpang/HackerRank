#include <bits/stdc++.h>

using namespace std;
#define ul unsigned long

// Complete the flippingBits function below.
ul flippingBits(ul n) {
    return n ^ UINT_MAX;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        ul n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        ul result = flippingBits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
