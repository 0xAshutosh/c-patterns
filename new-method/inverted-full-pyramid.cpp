#include <iostream>
using namespace std; 

int main(void) {
    int n;
    cin >> n; 

    for (int row = 0; row < n; row++) { 
        int k = 0; 
        for (int col = 0; col < 2 * n - 1; col++) {
            if (col < row) cout << " "; 
            else if (k < n - row) {
                cout << "* "; 
                k++;  
            } else cout << " "; 
        } 
        cout << endl; 
    }

    return 0; 
}