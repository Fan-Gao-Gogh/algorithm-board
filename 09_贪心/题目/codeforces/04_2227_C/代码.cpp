#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 200010;
int q[N];
 
int main() 
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> a; 
		vector<int> b;
		vector<int> c;
		vector<int> d;
		for (int i = 0; i < n; i++) cin >> q[i];
 
		for (int i = 0; i < n; i++) {
			if (q[i] % 2 == 0 && q[i] % 3 == 0) {
				c.push_back(q[i]);
			}
			else if(q[i]%2==0) {
				a.push_back(q[i]);
			}
			else if (q[i] % 3 == 0) {
				b.push_back(q[i]);
			}
			else if (q[i] % 2 != 0 && q[i] % 3 != 0) {
				d.push_back(q[i]);
			}
		}
		for (auto it : c) {
			cout << it << ' ';
		}
		for (auto it : a) {
			cout << it << ' ';
		}
		for (auto it : d) {
			cout << it << ' ';
		}
		for (auto it : b) {
			cout << it << ' ';
		}
		cout << endl;
	}
	return 0;
}
