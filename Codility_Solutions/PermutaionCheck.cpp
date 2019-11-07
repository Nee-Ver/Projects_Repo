#include<vector>

// Time Complexity: O(N)

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int isPerm = 0;
    int N = A.size();
    if(N == 0)
        return 1;
        
    if(N == 1)
    {
        if(A[0] == 1)
            isPerm = 1;
    }
    if(N > 1)
    {
        int xorIndex = 1;
        for(int i = 2; i < N+1; i++)
            xorIndex = xorIndex^i;
    
        int xorValue = A[0];
        for(int i = 1; i < N; i++)
            xorValue = xorValue^A[i];
        
        if((xorIndex^xorValue) == 0)
            isPerm = 1;
        else
            isPerm = 0;
    }
    return isPerm;
}
