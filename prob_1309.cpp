#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    int q;
    cin >> q;

    int maxResult = INT_MIN; // Initialize to the minimum possible integer

    while (q--) {
        int x;
        cin >> x;

        for (int i = 0; i < n; i++) {
            int mval = (a[i] + x) % m;
            cout<<" mval of  "<<i<<" is "<<mval<<endl;
            maxResult = max(maxResult, mval); // Update maximum value directly
        }
    }

    cout << " maxR = "<<maxResult<<endl;
    return 0;
}
