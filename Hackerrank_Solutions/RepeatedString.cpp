#include <bits/stdc++.h>

using namespace std;

//Complete the repeatedString function below.
long repeatedString(string s, long n) 
{
    long totalACount = 0;
    int countAInInput = 0 ;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        if(s[i] == 'a')
            countAInInput++;
    }
    long exactStr = n/len;
    totalACount = countAInInput * exactStr;
    int remainingString = n%len;
    for(int i = 0; i < remainingString; i++)
    {
        if(s[i] == 'a')
            totalACount++;
    }

    return totalACount;
}
