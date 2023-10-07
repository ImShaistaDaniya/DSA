// roman to integer  
#include <iostream>
#include <unordered_map>  // Include necessary header for unordered_map
#include <string>         // Include necessary header for string

int romanToInt(std::string s) {
    std::unordered_map<char, int> m;
    
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    
    int ans = 0;
    
    for(int i = 0; i < s.length(); i++){
        if(i < s.length() - 1 && m[s[i]] < m[s[i+1]]){
            ans -= m[s[i]];
        }
        else{
            ans += m[s[i]];
        }
    }
    return ans;
}

int main() {
    std::string s;

    std::cout << "Enter Roman numeral: ";
    std::cin >> s;

    int result = romanToInt(s);

    std::cout << "Integer representation: " << result << std::endl;
    
    return 0;
}
