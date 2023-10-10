/*Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

class Solution{
public:
bool Construct(std::string  RansomNote, std::string Magazine){
    std::vector<int> arr(26);
    for (char i : Magazine){
        arr[i -97]++; 
    }
    for (char i : RansomNote){
        arr[i -97]--; 
    }
    for (auto i : arr){
        if(i<0){
            return  false;
        } 
    }
    return true;
   }
};

int main() {
    Solution solution;
    std::string RansomNote;
    std::string Magzine;
    std::cout<<"Enter the RansomNote: ";
    std::cin>>RansomNote;
    std::cout<<"Enter the Magzine: ";
    std::cin>>Magzine;

    bool result =solution.Construct(RansomNote, Magzine);
    std::cout<<"Result: " <<std::boolalpha <<result<<std::endl;
    
    return 0;
}

