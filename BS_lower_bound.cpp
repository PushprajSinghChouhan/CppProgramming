#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& v, int element) {
    int lo = 0, ho = v.size() - 1;
    int mid;

    while (ho - lo > 1) {
        mid = (lo + ho) / 2;
        if (v[mid] < element) {
            lo = mid + 1;
        } else {
            ho = mid;
        }
    }
    // Check if the lowest or highest index meets the condition
    if (v[lo] >= element) {
        return lo;
    }
    if (v[ho] >= element) {
        return ho;
    }
    return -1; // Return -1 if no such index is found
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Make sure the vector is sorted
    sort(v.begin(), v.end());

    int element;
    cin >> element;
    
    int result = lowerBound(v, element);
    cout << result << endl; // Output the result

    return 0;
}
