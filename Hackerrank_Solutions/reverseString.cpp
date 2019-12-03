#include <string>
#include <iostream>

using namespace std;


// Run time: O(N);

// Function to reverse words
void reverseWords(string s) 
{ 
	int l = s.length()-1;
	string reverseString = "";
	string temp = "";
	while(l >=0)
	{
	    if(s[l] == ' ')
	    {
	        reverseString += temp + ' ';
	        temp = "";
	    }
	    else
	    {
	        temp=s[l] + temp;
	    }
	    l--;
	    
	}
  reverseString += temp;
} 

// Driver Code 
int main() 
{ 
	string s = "i like this program very much"; 
	reverseWords(s); 
	getchar(); 
	return 0; 
} 
