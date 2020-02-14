#include <bits/stdc++.h>
using namespace std;

int square[1002][1002], dp[1002][1002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin.precision(10);
    int n, m, ans = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> square[i][j];

    for(int i = 0; i < n; i++) dp[i][0] = square[i][0];

    for(int i = 0; i < m; i++) dp[0][i] = square[0][i];

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < m; j++)
        {
            if (square[i][j]) dp[i][j] = min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1])) + 1;
            else dp[i][j] = 0;
            ans = max(ans, dp[i][j]);
        }
    }

    for (int i = 0; i < n; ++i) ans = max(ans, dp[i][0]);

    for (int i = 0; i < m; ++i) ans = max(ans, dp[0][i]);

    cout << ans << endl;
    return 0;
}