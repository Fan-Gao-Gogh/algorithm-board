#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
typedef pair<int, int> PII;
vector<PII> p;
const int N = 300010;
int v[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) cin >> v[i];
        p.clear();
        for (int i = 0; i < m; i++)
        {
            int t, z;
            cin >> t >> z;
            p.push_back({ t,z });
        }
        sort(p.begin(), p.end(),greater<PII>());
        long long res = 0;
        multiset<int> f;
        int j=n;
        for (int i = 0; i <p.size(); i++)
        {
            int x = p[i].first;
            int y = p[i].second;
            
            while(j>=x)
            {
                f.insert(v[j]);
                j--;
            }
            auto it = f.upper_bound(y);
            if (it != f.begin()) {
                --it;
                res += *it;
                f.erase(it);
            }
        }
        cout << res << endl;
    }
    return 0;
}
