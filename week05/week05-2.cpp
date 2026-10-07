///week05-2.cpp
///LeetCode 709.To Lower case
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0;i<s.length();i++){
            s[i] = tolower(s[i]);
        }
        return s;
    }
};
