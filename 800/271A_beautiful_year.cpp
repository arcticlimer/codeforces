/*
 * Problem description:
 *
 * https://codeforces.com/problemset/problem/271/A 
 *
*/

#include <bits/stdc++.h>

using namespace std;

int isUnique(int num) {
    int visited[10] = {0};
    while(num) {
        if(visited[num % 10]) break;
        visited[num % 10] = 1;     
        num /= 10;
    }
    if(num == 0) return 1;
    return 0;
}

int main() {
    short y, r;
    cin >> y;
    while(!isUnique(++y)) continue;
    cout << y << '\n';
}
