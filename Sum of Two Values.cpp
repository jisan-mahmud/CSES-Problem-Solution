#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout << fixed << setprecision(a);

int main(){
    optimize();

    int n, x;
    cin >> n >> x;

    int arr[n];

    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    map<int, int> cnt;

    for(int i = 0;i < n;i++){
        if(cnt[x - arr[i]]) {
            cout << cnt[x - arr[i]] << ' ' << i+1;
            return 0;
        }
        cnt[arr[i]] = i+1;
    }

    cout << "IMPOSSIBLE";
    
    return 0;
}
