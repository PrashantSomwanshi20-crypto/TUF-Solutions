class Solution {
public:
    void pattern7(int n) {
        for (int i = 0; i < n; i++) {
            // Print leading spaces
            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            
            // Print stars
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }
            
            // Move to the next row
            cout << endl;
        }
    }
};