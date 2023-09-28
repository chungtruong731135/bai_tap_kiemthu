#include <iostream>
#include <vector>
#include <limits>

int findMin(const std::vector<int>& arr) {
    if (arr.empty()) {
        throw std::runtime_error("Mang rong.");
    }

    int min = std::numeric_limits<int>::max();
    for (int num : arr) {
        if (num < min) {
            min = num;
        }
    }

    return min;
}

int main() {
    std::vector<std::vector<int>> testCases = {
        {1, 2, 3, 4, 5},       // Giá trị nhỏ nhất: 1
        {-5, 0, 100, -20, 10}, // Giá trị nhỏ nhất: -20
        {42},                  // Giá trị nhỏ nhất: 42
        {0, 0, 0, 0, 0},       // Giá trị nhỏ nhất: 0
        {}                     // Mảng rỗng
    };

    for (const auto& testCase : testCases) {
        try {
            int min = findMin(testCase);
            std::cout << "Gia tri nho nhat trong mang: " << min << std::endl;
        } catch (const std::runtime_error& e) {
            std::cerr << "Loi: " << e.what() << std::endl;
        }
    }

    return 0;
}
