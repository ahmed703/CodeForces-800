#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2, concatenatedWord, wordInput;
    cin >> word1;
    cin >> word2;
    cin >> wordInput;
    concatenatedWord = word1 + word2;
    int concatLen = concatenatedWord.length(), wordLen = wordInput.length();
    if (concatLen == wordLen) {
        int finishedArr[26] = {0}, wordInputArr[26] = {0};
        for(int i = 0; i < concatLen; i++) {
            finishedArr[(int)concatenatedWord[i] - 65]++;
            wordInputArr[(int)wordInput[i] - 65]++;
        }
        int flag = 0;
        for(int i = 0; i < concatLen; i++) {
            if (finishedArr[i] != wordInputArr[i])
                flag = 1;
        }
        if (flag)
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;

    }
    else
        cout << "NO" << endl;

    return 0;
}
