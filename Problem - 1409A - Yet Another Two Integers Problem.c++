#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int a, b, steps = 0, k = 10;
        cin >> a >> b;
        if (a > b) {
            while (a != b ) {
                if (a - k >= b) {
                    a -= k;
                    steps++;
                }
                else
                    k--;
            }
        }
        else if (a < b) {
            while (a != b ) {
                if (a + k <= b) {
                    a += k;
                    steps++;
                }
                else
                    k--;
            }
        }
        cout << steps << endl;
    }
    // Result: Time Limit exceeded
    return 0;
}
