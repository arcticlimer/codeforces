/*
 * Problem description:
 *
 * https://codeforces.com/problemset/problem/467/A
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    short n, p, q, c(0);
    cin >> n;
    for(short i=0; i<n; i++) {
        cin >> p >> q;
        if(q-p>=2) c++;
    }
    cout << c << '\n';
}
