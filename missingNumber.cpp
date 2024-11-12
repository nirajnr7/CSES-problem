#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Use a vector instead of a raw array
    vector<int> arr(n - 1);
    
    int temp_xor = 0;
    
    // XOR the elements in the array
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        temp_xor ^= arr[i];
    }
    
    // XOR all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        temp_xor ^= i;
    }

    // Output the result (missing number)
    cout << temp_xor << endl;

    return 0;
}
