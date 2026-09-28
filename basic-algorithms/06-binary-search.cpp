#include <cassert>
#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& numbers, int target) {
    int left = 0;
    int right = static_cast<int>(numbers.size()) - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (numbers[middle] == target) {
            return middle;
        }
        if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}

int main() {
    assert(binarySearch({-1, 0, 3, 5, 9, 12}, 9) == 4);
    assert(binarySearch({}, 9) == -1);
    std::cout << "Binary Search: 2 tests passed\n";
}