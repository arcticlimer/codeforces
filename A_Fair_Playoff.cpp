#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p1, p2, p3, p4;
    int w1, w2;
    int l1, l2;

    while (n--) {
        cin >> p1 >> p2 >> p3 >> p4;

        if (p1 > p2) {
            w1 = p1;
            l1 = p2;
        } else {
            w1 = p2;
            l1 = p1;
        }

        if (p3 > p4) {
            w2 = p3;
            l2 = p4;
        } else {
            w2 = p4;
            l2 = p3;
        }

        cout << ((w1 > l2 && w2 > l1) ? "YES" : "NO") << endl;
    }
}
