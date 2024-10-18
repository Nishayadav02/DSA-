//logic

void printFrequency(string s){
    
    vector<int>freq(26 , 0);
    for(int i = 0; i < s.size() ; i++){
        freq[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] != 0){
            cout << (char)(i + 'a') << freq[i] << " ";
        }
    }
}