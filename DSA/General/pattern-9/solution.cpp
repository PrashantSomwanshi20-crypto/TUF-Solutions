class Solution {
public:
    void pattern9(int n) {
        // Upper Pyramid (Erect)
        for (int i = 0; i < n; i++) {
            // Printing spaces
            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            // Printing stars
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
        
        // Lower Pyramid (Inverted)
        for (int i = 0; i < n; i++) {
            // Printing spaces
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            // Printing stars
            for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};