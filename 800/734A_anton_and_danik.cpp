/*
 * Problem description:
 *
 * https://codeforces.com/problemset/problem/734/A
 *
*/ 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d(0), a(0);
    char w;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> w;
        w == 'A' ? a++ : d++;
    }
    string answer = a>d ? "Anton" : (d>a ? "Danik" : "Friendship");
    cout << answer << '\n';
}
