#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    string music;
    cin >> n >> q >> music;

    while (q--) {
        int res = 0;
        int start, end;
        cin >> start >> end;

        // TODO: Make this pass the tests using a better approach
        for (int i = start - 1; i < end; i++) {
            res += int(music.at(i)) - 96;
        }
        cout << res << endl;
    }
}