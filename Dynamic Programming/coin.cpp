#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Dynamic programming algorithm to find the minimum number of coins to make change for a given amount.
// The coins available are 1, 4, 5, and 10.
vector<int> CHANGE(int n) {
    // C[i] will store the minimum number of coins needed to make change for amount i.
    vector<int> C(n + 1);
    
    // d is the array of coin denominations.
    vector<int> d = {1, 4, 5, 10}; 
    int k = d.size();

    // Base case: 0 coins are needed to make change for amount 0.
    C[0] = 0;

    // Fill the C table from 1 to n.
    for (int p = 1; p <= n; ++p) {
        int min_coins = INT_MAX; 

        // Iterate through all coin denominations.
        for (int i = 0; i < k; ++i) {
            // Check if the current coin denomination is less than or equal to the amount.
            if (p >= d[i]) {
                // If the number of coins to make change for p-d[i] plus one (for the current coin)
                // is less than the current minimum, update the minimum.
                if (C[p - d[i]] + 1 < min_coins) {
                    min_coins = C[p - d[i]] + 1;
                    std::cout << "C[" << p << "] = C[" << p - d[i] << "] + 1 = " << C[p - d[i]] << " + 1 = " << min_coins << std::endl;
                }
            }
        }
        // Store the minimum number of coins for amount p.
        C[p] = min_coins;
    }

    return C;
}

int main() {
    int amount = 20;
    vector<int> result = CHANGE(amount);
    
    // Print the result for each amount from 0 to 'amount'.
    cout << "Minimum coins for change up to " << amount << ":\n";
    for (int i = 0; i <= amount; ++i) {
        cout << "C[" << i << "] = " << result[i] << endl;
    }

    return 0;
}