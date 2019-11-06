#include<cmath>

// Time Complexity: O(1)

int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    int distance = Y-X;
    int jumps = ceil(double(distance)/D);
    return jumps;
}
