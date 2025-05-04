#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string S;
    std::cin >> S;
    std::vector<bool> present(26, false); 
    for (char c : S) {
        present[c - 'a'] = true; 
    }
  
    for (int i = 0; i < 26; ++i) {
        if (!present[i]) {
            std::cout << char('a' + i) << std::endl; 
            break;
        }
    }
    
    return 0;
}
