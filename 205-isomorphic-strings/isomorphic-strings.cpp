#include <vector>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        
      
        int mapS[256] = {0}, mapT[256] = {0};
        
        for (int i = 0; i < s.length(); ++i) {
           
            if (mapS[s[i]] != mapT[t[i]]) 
                return false;
            

            mapS[s[i]] = mapT[t[i]] = i + 1; 
        }
        
        return true;
    }
};