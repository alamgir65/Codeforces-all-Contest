#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;
#define print(flag) (flag) ? cout << "YES\n" : cout << "NO\n";
#define all(x) x.begin(), x.end()
#define nl cout << endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int, int>
#define out(x) cout << x << '\n';
#define out2(x, y) cout << x << " " << y << '\n';
#define vii vector<int>
#define vll vector<ll>
#define dqii deque<int>
#define dqll deque<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void spiralOrder(const vector<vector<int>>& matrix) {
    if (matrix.empty()) return;

    int top = 0,ans=0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        vector<int> v;
        string s;
        for (int i = left; i <= right; i++) {
            s+=to_string(matrix[top][i]);
        }
        top++; 
        for (int i = top; i <= bottom; i++) {
            s+=to_string(matrix[i][right]);
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                s+=to_string(matrix[bottom][i]);
            }
            bottom--;  
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                s+=to_string(matrix[i][left]);
            }
            left++;
        }
        // s += s;
        string tmp;
        tmp += s[0];
        tmp += s[1];
        tmp += s[2];
        s += tmp;
        for(int i=0;i<s.size()-3;i++){
            if(s.substr(i,4)=="1543") ans++;
        }
    }
    cout<<ans<<endl;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    vector<vector<int>> mat(n,vector<int>(m));
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mat[i][j]=v[i][j]-'0';
        }
    }
    spiralOrder(mat);
    // cout << ans << endl;
}

love {
    Alamgir
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
