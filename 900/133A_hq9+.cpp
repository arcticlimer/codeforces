/*
 * Problem description:
 *
 * https://codeforces.com/problemset/problem/133/A 
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string p, a("NO");
    char arr[3] = {'H', 'Q', '9'};
    cin >> p;
    for(char c : arr) {
        if (p.find(c) != string::npos) a = "YES";
    }
    cout << a << '\n';
}
