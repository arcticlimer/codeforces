/*
 * Problem description:
 *
 * https://codeforces.com/problemset/problem/41/A
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    s = s == t ? "YES":"NO";
    cout << s << '\n';
}
