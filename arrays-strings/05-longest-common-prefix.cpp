#include <cassert>
#include <iostream>
#include <string>
#include <vector>

std::string longestCommonPrefix(const std::vector<std::string>& words) {
    if (words.empty()) {
        return "";
    }
    std::string prefix = words[0];
    for (const std::string& word : words) {
        while (word.compare(0, prefix.size(), prefix) != 0) {
            prefix.pop_back();
            if (prefix.empty()) {
                return "";
            }
        }
    }
    return prefix;
}

int main() {
    assert(longestCommonPrefix({"flower", "flow", "flight"}) == "fl");
    assert(longestCommonPrefix({}) == "");
    std::cout << "Longest Common Prefix: 2 tests passed\n";
}