#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long ans = 0;
    long long i = 0, j = 0;

    while (j < s.size()) {
        if (s[i] == s[j]) {
            // The characters are the same, extend the window
            ans = max(ans, j - i + 1);
            j++;
        } else {
            // The characters differ, move the starting point of the window
            i = j;  // Move i to the current position of j
            j++;    // Move j to the next character
        }
    }

    cout << ans << endl;

    return 0;
}
