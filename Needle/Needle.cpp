#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) 
	{
		for (int i = 0; i < haystack.size() - needle.size(); i++)
		{
			bool found = true;
			for (int j = 0; j < needle.size(); j++)
			{
				if (haystack[i+j] != needle[j])
				{
					found = false;
					break;
				}
			}
			if (found)
				return i;
		}
		return -1;
	}
};
int main()
{
	string haystack = "rdsfrr", needle = "rd";
	Solution slt;
	int result = slt.strStr(haystack, needle);
	cout << result;

}
