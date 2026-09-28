#include <cassert>
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

bool isValidParentheses(const std::string& text) {
    const std::unordered_map<char, char> opening{{'(', ')'}, {'[', ']'}, {'{', '}'}};
    std::stack<char> expected;
    for (char character : text) {
        if (opening.count(character)) {
            expected.push(opening.at(character));
        } else if (expected.empty() || expected.top() != character) {
            return false;
        } else {
            expected.pop();
        }
    }
    return expected.empty();
}

int main() {
    assert(isValidParentheses("([]{})"));
    assert(!isValidParentheses("([)]"));
    std::cout << "Valid Parentheses: 2 tests passed\n";
}