#include<bits/stdc++.h>
#include<iomanip>
#define int long long int
#define all(x) x.begin(),x.end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
void precision(int a){cout<<setprecision(a)<<fixed;}

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int32_t main() {
    init_code();
    int T;
    cin >> T;
    while(T--){
        int n,k;cin>>n>>k;
        int arr[n];
        int maxi = INT_MIN;
        rep(i,0,n){
            cin>>arr[i];
            maxi = max(maxi,arr[i]);
        }
        vector<int> v;
        rep(i,0,n){
            if(arr[i] == maxi){
                v.pb(i);
            }
        }
        int ans = 0;
        for(auto x : v){
            if(x == n-1){
                ans++;
                continue;
            }
            if(x>=k-1){
                ans += (n-x-1)+1;
            }
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}
