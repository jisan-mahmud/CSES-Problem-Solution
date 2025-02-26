#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    multiset<int> window(arr.begin(), arr.begin() + k); 
    auto mid = next(window.begin(), (k - 1) / 2);

    cout << *mid << " ";

    for (int i = k; i < n; i++) {
        window.insert(arr[i]);
        if (arr[i] < *mid) mid--; 

        if (arr[i - k] <= *mid) mid++; 
        window.erase(window.find(arr[i - k])); 
        
        cout << *mid << " ";
    }

    cout << endl;
    return 0;
}
