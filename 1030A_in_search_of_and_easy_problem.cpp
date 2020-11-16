/*
 * Problem description:
 *
 * https://codeforces.com/problemset/problem/1030/A
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, c(0);
    string answer;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a;
        c += a;
    }
    answer = c ? "HARD":"EASY";
    cout << answer << '\n';
}

