
//Time Complexity: O(N)

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int N = A.size();
    int pathSum = X*(X+1)/2;
    if((N == 0) || (pathSum == 0))
    {
        return -1;   
    }
    bool countArr[N+1] = {false};
    int atTime = -1;
    int i = 0;
    for(; i < N; ++i)
    {
        if(pathSum)
        {
            if(!countArr[A[i]] && (A[i] <= X))   
            {
                pathSum = pathSum - A[i];
                countArr[A[i]] = true;
            }
        }
        else
        {
            break;
        }
    }
    if(!pathSum)
    {
        if(i > 0)
            atTime = i-1;
        else
            atTime = i;
    }
    return atTime;
}
