//logic

vector<int>alpha(26 , 0);
for(int i = 0; i < s.size(); i++){
    if(s[i] == ' ')
        continue;
    else
        alpha[s[i] - 'a']++;
}

for(int i = 0; i < 26; i++){
    if(alpha[i] == 1 ){
        cout << char(i + 'a') << " ";
    }
}