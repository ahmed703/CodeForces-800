#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int len;
    cin >> len;
    char arr[len];
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
        arr[i] = tolower(arr[i]);
    }
    int numberedArr[25] = {0};
    for(int i = 0; i < len; i++) {
        numberedArr[(int)arr[i] - 97]++;
    }
    int flag = 0;
    for(int i = 0; i < 25; i++)
        if (numberedArr[i] == 0) {
            flag = 1;
            break;
        }
    if (flag)
        cout << "NO" << endl;
    else 
        cout << "YES" << endl;
    return 0;
}
