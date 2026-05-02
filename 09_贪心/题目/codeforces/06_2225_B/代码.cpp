#include <iostream>
using namespace std;
const int N = 200010;

int main() 
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < s.size()-1; i++)
		{
			if (s[i] == s[i + 1]) cnt++;
		}
		if (cnt > 2) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
