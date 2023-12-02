/*Given a string s, find the length of the longest substring without repeating characters*/


 #include <iostream>
#include <unordered_map>

int lengthOfLongestSubstring(std::string s) {
    int n = s.length();
    int maxLength = 0;
    std::unordered_map<char, int> charIndex;

    for (int i = 0; i < n; i++) {
        int j = i;
        while (j < n && charIndex.find(s[j]) == charIndex.end()) {
            charIndex[s[j]] = j;
            j++;
        }

        maxLength = std::max(maxLength, j - i);

        if (j < n) {
            i = charIndex[s[j]] + 1;
            charIndex.clear();
        }
    }

    return maxLength;
}

int main() {
    std::string s;
    std::cout << "Enter the string: ";
    std::cin >> s;

    int result = lengthOfLongestSubstring(s);
    std::cout << "Length of the longest substring without repeating characters: " << result << std::endl;

    return 0;
}

