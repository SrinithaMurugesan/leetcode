class Solution {
public:
    bool isPalindrome(int x) {
        string b=to_string(x);
        string a=b;
        reverse (a.begin(),a.end());
        if(a==b){
            return true;
        }
        else{
            return false;
        }
     }
};