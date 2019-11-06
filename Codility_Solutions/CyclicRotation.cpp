#include <vector>

// Time Complexity: O(N)

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int N = A.size();
    
    //Return the vector without processing as no rotation needed
    if((K == N) || (K == 0))
        return A;
    vector<int> rotatedArray (N);
    for(int i = 0; i < N; i++)
    {
        //calculate the final index
        int rotatedIndex = (i + (1*K)) % N;
        if(rotatedIndex < N && rotatedIndex >= 0)
        {
            rotatedArray[rotatedIndex] = A[i];
        }
    }
    
    return rotatedArray;
}
