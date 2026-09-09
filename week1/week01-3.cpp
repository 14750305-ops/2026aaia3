//week01-3.cpp 學習計畫basic 第三週
//leetcode 28.find-the-index-of-the-first-occurrence-in-a-string
class Solution {
public:
    int strStr(string haystack, string needle) {
        int N1=haystack.length(),N2 = needle.length();
        for (int i=0;i<N1-N2;i++){
            if(haystack.substr(i,N2)==needle) return i;
        }
        return -1;//找不到
    }
};
