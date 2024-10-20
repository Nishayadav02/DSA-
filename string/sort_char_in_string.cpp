/*#include<bits/stdc++.h>

Time Complexity: O(n^2) (nested for loops)
Space Complexity: O(1) in C++

using namespace std;
string solve(string str, int n) {

  // bubble sort
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {

      if (str[j] > str[j + 1]) {
        char temp = str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp;
      }
    }
  }

  return str;
}
int main() {
  string str = "zxcbg";
  int n = str.length();

  cout << "Given string: " << "\n";
  cout << str << "\n";

  cout << "After sorting: " << "\n";
  cout << solve(str, n) << "\n";
  return 0;
}*/


/*#include<bits/stdc++.h>

// Time Complexity: O(n * log n)
// Space Complexity: O(1) in C++

using namespace std;
string solve(string str) {
  sort(str.begin(), str.end());
  return str;
}
int main() {

  // Input string
  string str = "zxcbg";
  int length = str.length();

  cout << "String after sorting:" << "\n";
  cout << solve(str) << "\n";
  return 0;
}*/

#include <iostream>
#include <string>
using namespace std;

void sortString(string &str) {
    int count[26] = {0}; 

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i]; 
        count[ch - 'a']++; 
    }

    int index = 0; 
    for (int i = 0; i < 26; i++) {
        while (count[i] > 0) {
            str[index++] = 'a' + i; 
            count[i]--; 
        }
    }
}

int main() {
    string str = "character"; 
    sortString(str);
    
    cout << "Sorted string: " << str << endl; 
    return 0;
}
