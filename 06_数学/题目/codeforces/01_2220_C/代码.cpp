#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long p, q;
        cin >> p >> q;

        long long C = 2 * p + 4 * q + 1;
        long long sqrt_C = (long long)sqrt(C);

        // 从sqrt_C开始，向下找奇数
        long long start = sqrt_C;
        if (start % 2 == 0) start--;

        bool found = false;
        for (long long a = start; a >= 3; a -= 2) {
            if (C % a == 0) {
                long long b = C / a;
                if (b - a <= 2 * p) {
                    cout << (a - 1) / 2 << " " << (b - 1) / 2 << "\n";
                }
                else {
                    cout << "-1\n";
                }
                found = true;
                break; // 找到差最小的，直接停
            }
        }

        if (!found) cout << "-1\n";
    }
    return 0;
}
