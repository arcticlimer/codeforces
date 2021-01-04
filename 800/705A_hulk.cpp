/*
 * Problem description:
 *
 * https://codeforces.com/problemset/problem/705/A 
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 
    int n;
    string a;
    cin >> n;

    for(short i=1; i<=n; i++) {
        if (i % 2) a += "hate that I ";
        else a += "love that I ";
    }
    
    a.erase(a.length()-8, a.length());    
    cout << "I " << a << " it" << '\n';    
}

