// 11/10/26
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string palindrome;
    
    cout << "enter a word\n";
    cin >> palindrome;

    string reversedWord = palindrome;
    reverse(reversedWord.begin(), reversedWord.end());

    if(palindrome == reversedWord)
        cout << "this is a palindrome.";
    else {
            cout << "this isnt a palindrome";
    }
    return 0;
}
