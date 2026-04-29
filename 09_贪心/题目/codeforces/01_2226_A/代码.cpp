#include<iostream>
#include<cstring>
using namespace std;
const int mod=676767677;
const int N = 110;
int a[N];
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(a, 0,sizeof(a));
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        int res = 0;
        for (int i = n - 1; i >= 0; i -- )
        {
            if (a[i] == 1)
            {
                if (a[i + 1] == 0) {
                   res += 1;
                   res%=mod;
                }
            }
            else {
              res += a[i];
              res%=mod;
            }
        }
        cout << res << endl;
    }
    return 0;
}
