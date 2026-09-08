#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> count; // Map to store character frequencies
        
        // Step 1: Count characters in magazine
        for (char c : magazine) {
            count[c]++;
        }
        
        // Step 2: Verify ransomNote requirements
        for (char c : ransomNote) {
            if (count[c] > 0) {
                count[c]--; // Decrement usage
            } else {
                return false; // Not enough of this character
            }
        }
        
        return true;
    }
};
          
