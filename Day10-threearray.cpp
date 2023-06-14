#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e4 + 14;

int n, m, k, a[maxn], b[maxn], c[maxn], l[maxn], r[maxn];

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];
    for(int i = 0; i < 3; i++)
        cin >> l[i] >> r[i];
    for(int i = l[0]; i <= min(l[0] + m, r[0]); i++)
        for(int j = l[1]; j <= min(l[1] + m, r[1]); j++)
            for(int k = l[2]; k <= min(l[2] + m, r[2]); k++){
                int cnt = 0;
                for(int l = 0; l < n; l++)
                    cnt += ((ll) i * a[l] + (ll) j * b[l] - (ll) k * c[l]) % m == 0;
                cerr << cnt << '\n';
                if(cnt == ::k)
                    return cout << i << ' ' << j << ' ' << k << '\n', 0;
             }
    cout << "-1\n";
}