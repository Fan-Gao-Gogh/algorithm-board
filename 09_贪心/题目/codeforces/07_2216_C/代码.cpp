#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>

using namespace std;
const int N = 200010;
typedef long long LL;
LL a[N];
LL s[N];
LL bp[N];//只p的前缀和
LL bq[N];//先q再p的前缀和
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        LL n, k, p, q;
        cin >> n >> k >> p >> q;
        memset(a,0,sizeof(a));
        memset(s,0,sizeof(s));
        for (int i = 1; i <= n; i++) cin >> a[i];

        for (int i = 1; i <= n; i++) {
            s[i] = s[i - 1] + min(a[i] % p, (a[i] % q) % p);
            bp[i] = bp[i - 1] + a[i] % p;
            bq[i] = bq[i - 1] + (a[i] % q) % p;
        }
        LL ans = 1e18;
        for (int i = 1; i <= n-k+1; i++)
        {
            int j = i + k - 1;
            LL sum_p = bp[j] - bp[i - 1];
            LL sum_q_p = bq[j] - bq[i - 1];
            LL res = min(sum_p, sum_q_p);
            LL sum_min = s[j] - s[i - 1];
            LL current = s[n] - sum_min + res;
            ans = min(ans, current);
        }
        cout << ans << endl;
    }
    return 0;
}
