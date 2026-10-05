class Solution {
public:
    void pattern8(int n) {
        for (int i = 0; i < n; i++) {
            // Print spaces
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            
            // Print stars
            for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
                cout << "*";
            }
            
            // Move to the next line
            cout << "\n";
        }
    }
};