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

    int arr[n+1];

    for(int i = 1;i <= n;i++){
        cin >> arr[i];
    }
    map<int, int> cnt;

    for(int i = 1;i <=  n;i++){
        for(int j = i + 1;j <= n;j++){
            int req = x - (arr[i] + arr[j]);
            if(cnt.count(req)){
                cout << cnt[req] << ' ' << i << ' ' << j;
                return 0;
            }
        }
        cnt[arr[i]] = i;
    }

    cout << "IMPOSSIBLE";
    
    return 0;
}
