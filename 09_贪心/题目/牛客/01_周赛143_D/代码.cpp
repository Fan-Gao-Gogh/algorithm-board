#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long LL;
typedef pair<LL, int> PII;
vector<PII> events;

int main() {
    LL n, k;
    cin >> n >> k;
    for (LL i = 0; i < n; i++) {
        LL l, r;
        cin >> l >> r;
        events.push_back({l - k, 1});   // 左端点：+1
        events.push_back({r + 1, -1});  // 右端点+1：-1
    }
    
    // 按位置排序，位置相同则-1在前
    sort(events.begin(), events.end());
    
    LL current = 0, ans = 0;
    for (auto &e : events) {
        current += e.second;
        ans = max(ans, current);
    }
    
    cout << ans << endl;
    return 0;
}
