#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {

        int N, K;
        cin >> N >> K;

        vector<int> sum(N, 0);

        int card = K;
        bool forward = true;

        while (card > 0) {

            if (forward) {

                for (int i = 0; i < N && card > 0; i++) {
                    sum[i] += card;
                    card--;
                }

            } else {

                for (int i = N - 1; i >= 0 && card > 0; i--) {
                    sum[i] += card;
                    card--;
                }
            }

            forward = !forward;
        }

        int ans = 0;

        for (int i = 0; i < N; i++) {
            ans = max(ans, sum[i]);
        }

        cout << ans << endl;
    }

    return 0;
}
