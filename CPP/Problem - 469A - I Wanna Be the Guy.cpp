#include <iostream>

using namespace std;

int main() {
    
    int n, p, q, count = 0;
    cin >> n;
    int arr[n*2-3];
    
    cin >> p;
    for(int i = 0; i < p; i++) { // 3
        cin >> arr[i];
    }
    cin >> q;
    
    for(int i = p; i <= n; i++) {
        cin >> arr[i];
    }
    
    int finished[n] = {0};
    
    for(int i = 0; i <= n; i++) {
        finished[arr[i] - 1]++;
    }
    
    int flag = 0;
    for(int i = 0; i < n; i++) {
        if (finished[i] == 0)
            flag = 1;
    }
    
    if (flag)       
        cout << "Oh, my keyboard!" << endl;
    else
        cout << "I become the guy." << endl;
        
    return 0;
}
