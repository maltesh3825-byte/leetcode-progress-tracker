#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>

bool isAnagram(std::string first, std::string second) {
    std::sort(first.begin(), first.end());
    std::sort(second.begin(), second.end());
    return first == second;
}

int main() {
    assert(isAnagram("anagram", "nagaram"));
    assert(!isAnagram("rat", "car"));
    std::cout << "Valid Anagram: 2 tests passed\n";
}