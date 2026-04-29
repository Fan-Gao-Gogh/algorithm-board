#include<iostream>
#include<cstring>
using namespace std;
const int N = 200010;
int a[N];
 
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int res = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n-1; i++)
        {
            int ma = max(a[i], a[i + 1]);
            int mi = min(a[i], a[i + 1]);
            if (ma - mi == gcd(a[i], a[i + 1])) {
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
