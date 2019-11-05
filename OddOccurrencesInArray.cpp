#include <bits/stdc++.h> 
using namespace std;

//Info: 
//Time Complexity: O(N*log(N)) where N is the size of the vector

int solution(vector<int> &A) {
    
    //sort the vector , so it will become A= {1,1,2,2,3,3,4} if initially A was A = {1,4,3,2,1,2,3}
    sort(A.begin(),A.end());
    
    int N = A.size();
    int oddNum = -1;
    
    // check value for A[i-1] and A[i]
    for(unsigned int i = 1; i < A.size(); i++)
    {
        if(A[i-1] == A[i])
        {
            i++;   
        }
        else
        {
            oddNum = A[i-1];
            break;
        }
    }
    //Check if last value is different
    if(A[N-1] != A[N-2])
    {
        oddNum = A[N-1];
    }
    return oddNum;
}
