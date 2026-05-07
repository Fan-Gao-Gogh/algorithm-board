#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long LL;
const int N = 200010;
LL a[N];
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        LL ma = 0;
        LL res = 0;
        vector<bool> vis(n+2,false);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= n) {
                vis[a[i]] =true;
            }
            ma = max(ma, a[i]);
        }

        res += ma * n;
        LL k = 0;
        while (k <= n && vis[k]) {
            k++;
        }
        res += k * (k + 1) / 2 + (n - k - 1) * k;

        if (k == 0) cout << res << endl;
        else if (k > 0 && ma > k - 1) {
            cout << res << endl;

        }
        else if (k > 0 && ma == k - 1) cout << res + 1 << endl;
    }
    return 0;
}
