#include <iostream>
#include<algorithm>

using namespace std;
const int N = 200010;
string row1, row2;
int dp[N];

int cow(int x)
{
	return row1[x] == row2[x] ? 0 : 1;
}

int row(int i, int j)
{
	int a = row1[i];
	int b = row1[j];
	int c = row2[i];
	int d = row2[j];
	int k1 = (a != 'R') + (b != 'R') + (c != 'R') + (d != 'R');
	int k2 = (a != 'B') + (b != 'B') + (c != 'B') + (d != 'B');
	int k3 = (a != 'R') + (b != 'R') + (c != 'B') + (d != 'B');
	int k4 = (a != 'B') + (b != 'B') + (c != 'R') + (d != 'R');
	return min({ k1,k2,k3,k4 });
}
int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		memset(dp, 0, sizeof(dp));
		int n;
		cin >> n;
		cin >> row1 >> row2;
		if (row1[0] != row2[0]) dp[0] = 1;

		dp[1] = min(dp[0] + cow(1), row(0, 1));

		for (int i = 2; i < n; i++)
		{
			dp[i] = min(dp[i - 1] + cow(i), dp[i - 2] + row(i - 1, i ));
		}
		cout << dp[n-1 ] << endl;
	}
	return 0;
}
