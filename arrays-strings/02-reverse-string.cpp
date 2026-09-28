#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>

void reverseString(std::vector<char>& characters) {
    std::reverse(characters.begin(), characters.end());
}

int main() {
    std::vector<char> example{'h', 'e', 'l', 'l', 'o'};
    reverseString(example);
    assert((example == std::vector<char>{'o', 'l', 'l', 'e', 'h'}));
    std::vector<char> empty;
    reverseString(empty);
    assert(empty.empty());
    std::cout << "Reverse String: 2 tests passed\n";
}