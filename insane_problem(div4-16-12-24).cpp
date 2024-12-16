#include <bits/stdc++.h>
#define int long long
using namespace std;

//check thisss

#define endl '\n'

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int_fast32_t main() {
    fast();
    int t;
    cin >> t;
    
    while (t--) {
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        
        int count = 0;
        
        // Iterate over powers of k (i = 0, 1, 2, ...)
        for (int i = 0; ; ++i) {
            long long k_power_i = pow(k, i);
            
            // If k^i is greater than r2, break out of the loop
            if (k_power_i > r2) break;

            // Calculate the minimum and maximum x values that can satisfy the equation
            long long x_min = (l2 + k_power_i - 1) / k_power_i; // ceil(l2 / k^i)
            long long x_max = r2 / k_power_i; // floor(r2 / k^i)

            // If x_min is greater than r1, no valid x exists for this power of k
            if (x_min > r1) continue;

            // If x_max is less than l1, no valid x exists for this power of k
            if (x_max < l1) continue;

            // Adjust the range so it's within [l1, r1]
            x_min = max(x_min, l1);
            x_max = min(x_max, r1);

            // Add the number of valid x values
            count += x_max - x_min + 1;
        }
        
        cout << count << endl;
    }

    return 0;
}
