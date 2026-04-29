#include <iostream>
#include<set>
#include<algorithm>
using namespace std;
const int N = 1000010;


bool check(int mid, multiset<int> st)//判断mid是否满足条件
{
    for (int k = mid - 1; k >= 0; k--)
    {
        auto it = st.find(k);
        if (it != st.end()) {
            st.erase(it);
        }
        else {
            it = st.upper_bound(2 * k);
            if (it == st.end()) return false;
            st.erase(it);
        }
    }
    return true;
}
int main() 
{
    int t;
    cin >> t;
    

    while (t--)
    {
        int n;
        multiset<int> st;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        int l = 0, r = N;
        while (l < r)
        {
            int mid = l + r+1 >> 1;
            if (check(mid,st))l = mid;
            else r = mid - 1;
        }
        cout << l << endl;
    }
    return 0;
}
