
/*
 * Problem description:
 *
 * https://codeforces.com/problemset/problem/977/A
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, m(0);
    cin >> x;
    while (x > 0) {
        for (int s=5; s>=1; s--) {
            if (x >= s) {
                x -= s;
                m++;
                break;
            }
        }
    }
    cout << m << '\n';
}

