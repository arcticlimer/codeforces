/*
 * Problem description:
 *
 * https://codeforces.com/problemset/problem/59/A
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    short l(0), u(0);
    string i;
    cin >> i;
    for(char c : i){
        isupper(c) ? u++ : l++;
    }

    for_each(i.begin(), i.end(), [&u, &l](char &c){
        c = (u>l ? toupper(c):tolower(c));
    });
 
    cout << i << '\n';
}
