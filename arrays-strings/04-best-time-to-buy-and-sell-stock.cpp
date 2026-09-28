#include <algorithm>
#include <cassert>
#include <iostream>
#include <limits>
#include <vector>

int maxProfit(const std::vector<int>& prices) {
    int lowestPrice = std::numeric_limits<int>::max();
    int bestProfit = 0;
    for (int price : prices) {
        lowestPrice = std::min(lowestPrice, price);
        bestProfit = std::max(bestProfit, price - lowestPrice);
    }
    return bestProfit;
}

int main() {
    assert(maxProfit({7, 1, 5, 3, 6, 4}) == 5);
    assert(maxProfit({7, 6, 4, 3, 1}) == 0);
    std::cout << "Best Time to Buy and Sell Stock: 2 tests passed\n";
}