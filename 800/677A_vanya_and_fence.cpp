/*
 * Problem description:
 *
 * https://codeforces.com/problemset/problem/271/A 
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 
    short n, h, a, c(0);
    cin >> n >> h;
    
    for(int i=0; i<n; i++) {
        cin >> a;
        a > h ? c+=2 : c++;
    }
    cout << c << '\n';
}
