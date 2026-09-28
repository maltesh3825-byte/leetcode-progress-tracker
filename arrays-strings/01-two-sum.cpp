#include <cassert>
#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& numbers, int target) {
    std::unordered_map<int, int> seen;
    for (int index = 0; index < static_cast<int>(numbers.size()); ++index) {
        int complement = target - numbers[index];
        if (seen.count(complement)) {
            return {seen[complement], index};
        }
        seen[numbers[index]] = index;
    }
    return {};
}

int main() {
    assert((twoSum({2, 7, 11, 15}, 9) == std::vector<int>{0, 1}));
    assert(twoSum({}, 0).empty());
    std::cout << "Two Sum: 2 tests passed\n";
}