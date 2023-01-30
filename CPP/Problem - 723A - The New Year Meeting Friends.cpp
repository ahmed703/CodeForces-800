#include <iostream>

using namespace std;

int main() {
    
    int a, b, c, min, max, middle;
    
    cin >> a >> b >> c;
    if (a > b)
        if (a > c){
            max = a;
            if (b > c) {
                min = c;
                middle = b;
            }
            else {
                min = b;
                middle = c;
            }
        }
        else {
            max = c;
            min = b;
            middle = a;
        }
    else {
        if (b > c){
            max = b;
            if (a > c) {
                min = c;
                middle = a;
            }
            else {
                min = a;
                middle = c;
            }
        }
        else {
            max = c;
            min = a;
            middle = b;
        }
    }
    int mid = (max + min) / 2;
    int mid_min = mid - min, mid_max = max - mid,
        mid_middle = abs(middle - mid);
    cout << mid_min + mid_max + mid_middle << endl;
    return 0;
}
