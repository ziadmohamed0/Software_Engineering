/**
 * @file Extra_prefix_Sum.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-03-22
 */

#include <iostream>

int main(void) {
    int T;
    std::cin >> T;

    while (T--) {
        int N;
        std::cin >> N;

        int arr[N], prefix[N];

        for (int i = 0; i < N; i++) {
            std::cin >> arr[i];
            prefix[i] = arr[i] + (i > 0 ? prefix[i - 1] : 0);
        }

        int Q;
        std::cin >> Q;

        while (Q--) {
            int L, R;
            std::cin >> L >> R;
            int sum = prefix[R] - (L > 0 ? prefix[L - 1] : 0);
            std::cout << sum << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
 