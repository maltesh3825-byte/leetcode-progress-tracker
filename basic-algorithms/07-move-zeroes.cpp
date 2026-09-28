#include <cassert>
#include <iostream>
#include <utility>
#include <vector>

void moveZeroes(std::vector<int>& numbers) {
    int nextNonzero = 0;
    for (int index = 0; index < static_cast<int>(numbers.size()); ++index) {
        if (numbers[index] != 0) {
            std::swap(numbers[nextNonzero], numbers[index]);
            ++nextNonzero;
        }
    }
}

int main() {
    std::vector<int> example{0, 1, 0, 3, 12};
    moveZeroes(example);
    assert((example == std::vector<int>{1, 3, 12, 0, 0}));
    std::vector<int> singleZero{0};
    moveZeroes(singleZero);
    assert(singleZero == std::vector<int>{0});
    std::cout << "Move Zeroes: 2 tests passed\n";
}