class Solution {
public:
    bool isPalindrome(string s) {
        
        s.erase(remove_if(s.begin(), s.end(), 
        []( const char& c ) -> bool { return !isalnum(c); } ), s.end());
        
        transform(s.begin(), s.end(), s.begin(),
        []( const char& c ) -> char { return tolower(c); });
        
        int l = 0;
        int r = s.length() - 1;
        
        while( l < r ){
            if( s[l++] != s[r--] )
                return false;
        }
        
        return true;
    }
    
};