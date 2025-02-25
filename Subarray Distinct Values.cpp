#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout << fixed << setprecision(a);

int main(){
    optimize();

    int n, k;
    cin >> n >> k;

    queue<int> x;

    for(int i = 0;i < n;i++){
        int temp;
        cin >> temp;
        x.push(temp);
    }

    queue<int> window;
    map<int, int> cnt; 

    long long ans = 0;

    while(!x.empty()){
        int f = x.front();
        x.pop();

        window.push(f);
        cnt[f]++;

        while((int)cnt.size() > k){
            int wf = window.front();
            window.pop();

            cnt[wf]--;
            if(cnt[wf] == 0){
                cnt.erase(wf);
            }
        }

        ans += window.size();

    }

    cout << ans;
    
    return 0;
}
