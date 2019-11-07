#include <vector>

// Time Complexity: O(N) or O(N*Log(N))

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int N = A.size();
    if(N == 0)
        return 1;
    //Take the XOR of all the elements lying between 1 to N+1
    int numXor = 1;
    for(int i = 2; i <= N+1; ++i)
        numXor = numXor^i;
    
    //Take the XOR of all the elements in array
    int arrayXor = A[0];
    for(int i = 1; i < N; ++i)
        arrayXor = arrayXor^A[i];

    //Return the XOR of  numXor and arrayXor
    // This will return the exact element that is  missing
    return numXor^arrayXor;
}
