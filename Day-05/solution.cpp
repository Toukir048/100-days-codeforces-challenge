#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 0;

    for (int x = 0; x <= n / a; x++) {
        for (int y = 0; y <= n / b; y++) {
            int used = x * a + y * b;
            int rem = n - used;

            if (rem >= 0 && rem % c == 0) {
                int z = rem / c;
                ans = max(ans, x + y + z);
            }
        }
    }

    cout << ans << endl;
    return 0;
}