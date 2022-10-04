//https://leetcode.com/problems/valid-palindrome/
class Solution {
public:

    bool isPalindrome(string s) {
        std::string parsed = "";
        for(int i = 0; i < s.length() ; i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                parsed += tolower(s[i]);    
            }
        }
        
        int j = parsed.length() - 1;
        
        for(int i = 0; i < parsed.length() ; i++){
            if(parsed[i] != parsed[j]){
                return false;
            }
            j--;
        }
    return true;
    }
};