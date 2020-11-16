/*
 * Problem description:
 * 
 * https://codeforces.com/problemset/problem/131/A
 * 
*/

#include <bits/stdc++.h>

using namespace std;

string convert(string s, int fc) {
    for_each(s.begin(), s.end(), [](char &c) {
        c = tolower(c);
    });
    if(fc) s[0] = toupper(s[0]);
    return s;
}

int main() {
    short uc(0);
    string a;
    cin >> a;

    for(char c : a) {
        if(isupper(c)) uc++;
    } 

    if(uc == a.length()) a = convert(a, 0);
    else if(islower(a[0]) && uc == a.length()-1) a = convert(a, 1);
    cout << a << '\n';
}
