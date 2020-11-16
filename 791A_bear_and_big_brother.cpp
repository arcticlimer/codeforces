/*
 * Full problem description:
 *
 * https://codeforces.com/problemset/problem/791/A
 *
*/

#include <bits/stdc++.h>

using namespace std; 

int main() {
    short a(0), l, b;
    cin >> l >> b;
    while (l <= b) {
        l *= 3;
        b *= 2;
        ++a;
    }
    cout << a << '\n';
}
