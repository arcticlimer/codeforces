/*
 * Problem description: 
 *
 * https://codeforces.com/problemset/problem/208/A 
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin >> a;
    a = regex_replace(a, regex("WUB"), " ");
    a = regex_replace(a, regex(" {1,}"), " ");
    if (a[0]==' ') a.erase(0, 1); 
    cout << a << '\n';
}
