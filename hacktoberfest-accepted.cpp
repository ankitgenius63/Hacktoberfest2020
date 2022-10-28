// C++ program to implement
// the above approach
#include<bits/stdc++.h>
using namespace std;

// Function to print subsequences containing
// ASCII value of the characters or the
// the characters of the given string
void FindSub(string str, string res,
			int i)
{
	
	// Base Case
	if (i == str.length())
	{
		
		// If length of the
		// subsequence exceeds 0
		if (res.length() > 0)
		{
			
			// Print the subsequence
		cout << res << " ";
		}
		return;
	}

	// Stores character present at
	// i-th index of str
	char ch = str[i];

	// If the i-th character is not
	// included in the subsequence
	FindSub(str, res, i + 1);

	// Including the i-th character
	// in the subsequence
	FindSub(str, res + ch, i + 1);

	// Include the ASCII value of the
	// ith character in the subsequence
	FindSub(str, res + to_string(int(ch)), i + 1);
}

// Driver Code
int main()
{
	string str = "ab";
	string res = "";
	
	// Stores length of str
	int N = str.length();

	FindSub(str, res, 0);
}

// This code is contributed by ipg2016107
