#include<cmath>
#include<bits/stdc++.h>

// Time Complexity: O(N)

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int minDiff = INT_MAX;
    int N = A.size();
    if(N == 0 || N == 1)
        return 0;
    
    int leftSum = A[0];
    int rightSum = 0;
    for(int i = 1 ; i < N; i++)
    {
        rightSum += A[i];
    }
    
    int minVal = abs(leftSum-rightSum);
    if(minVal < minDiff)
        minDiff = minVal;
    
    if(N > 2)
    {
        for(int i = 1; i < N-1; i++)
        {
            leftSum = leftSum + A[i];
            rightSum = rightSum - A[i];
            minVal = abs(leftSum-rightSum);
            if(minVal < minDiff)
                minDiff = minVal;
        }   
    }
    
    return minDiff;    
}
