#include <iostream>
#include <vector>
#include <algorithm>

int maximizeMinElement(std::vector<int>& a) {
    int n = a.size();
    int min_val = *min_element(a.begin(), a.end());
    int min_count = count(a.begin(), a.end(), min_val);

    if (min_count >= n) {
        // If min_count is greater than or equal to n, we can't remove all occurrences of min_val.
        return min_val;
    } else {
        // Otherwise, we can remove all occurrences of min_val.
        // By doing this, we make the minimum element in the modified array as large as possible.
        return min_val + (n - min_count);
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int result = maximizeMinElement(a);
    std::cout << result << std::endl;

    return 0;
}
