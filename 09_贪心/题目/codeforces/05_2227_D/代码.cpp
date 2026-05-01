#include <iostream>
#include<algorithm>
#include<set>
#include<cstring>
using namespace std;
const int N = 200010;
int a[N];
int n;

int solve(int l, int r)
{
	set<int> st;
	for (int i = 0; i <= n; i++) st.insert(i);

	while (l >= 0 && r < 2 * n && (a[l] == a[r])) {
		st.erase(a[l]);
		l--, r++;
	}
	return *st.begin();
}
int main() 
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < 2*n; i++) cin >> a[i];
		int x = -1, y = -1;
		for (int i = 0; i <2* n; i++) {
			if (a[i] == 0) {
				if (x == -1) x = i;
				else y = i;
			}
		}
		cout << max({ solve(x, x), solve(y, y), solve((x + y) / 2, (x + y + 1) / 2) }) << endl;
	}
	return 0;
}
