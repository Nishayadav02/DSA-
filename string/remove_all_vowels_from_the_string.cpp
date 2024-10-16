#include <iostream>
#include <string>
using namespace std;

string removeVowels(const string& str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        // Check if the character is not a vowel
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result += str[i]; // Add non-vowel characters to the result
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string noVowels = removeVowels(input);
    cout << "String without vowels: " << noVowels << endl;

    return 0;
}
