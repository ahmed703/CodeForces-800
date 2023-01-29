#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
        
    int min = arr[0], max = arr[0];
    int maxind, minind;
    for(int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
            maxind = i;
        }
        else if (min >= arr[i]) {
            min = arr[i];
            minind = i;
        }
    }
    int res;
    if (maxind > minind) 
        res = maxind + (n - 1 - minind) - 1;
    else 
        res = maxind + (n - 1 - minind); 
    
    cout << res << endl;
    return 0;
}
