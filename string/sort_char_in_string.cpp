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
#include <vector>
using namespace std;

int main() {
    string str = "character"; 
    vector<int> count(26, 0); 

    
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i]; 
        count[ch - 'a']++; 
    }

    
    string sortedStr;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < count[i]; j++) {
            sortedStr += 'a' + i; 
        }
    }

    cout << "Sorted string: " << sortedStr << endl; 
    return 0;
}
