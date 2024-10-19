// #include<bits/stdc++.h>
 
// using namespace std;
 
// string removeDuplicateLetters(string s) {
//   string ans = "";
//   for (int i = 0; i < s.length(); i++) {
//     int j = 0;
//     for (j = 0; j < i; j++) {
//       if (s[i] == s[j]) //same character found
//       {
//         break;
//       }
//     }
//     if (i == j) {
//       ans += s[i];
//     }
//   }
//   return ans;
// }
// int main() {
//   string str = "cbacdcbc";
//   cout<<"Original String: "<<str<<endl;
//   cout <<"After removing duplicates: " <<removeDuplicateLetters(str) << endl;
//   return 0;
// }


#include<bits/stdc++.h>

using namespace std;

string removeDuplicateLetters(string s) {
  string ans = "";
  vector<bool> visited(26, false);  // A vector to keep track of added characters

  for (int i = 0; i < s.length(); i++) {
    // Check if the character has been added to the result string
    if (!visited[s[i] - 'a']) {
      ans += s[i];               // Add character to result
      visited[s[i] - 'a'] = true; // Mark the character as added
    }
  }
  return ans;
}

int main() {
  string str = "cbacdcbc";
  cout << "Original String: " << str << endl;
  cout << "After removing duplicates: " << removeDuplicateLetters(str) << endl;
  return 0;
}
