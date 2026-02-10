#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	bool isSubsequence(string s, string t)
	{
		int i = 0, j = 0;
		for (j; i < s.size() && j < t.size(); j++)
		{
			if (s[i] == t[j])
				i++;
		}
		return (i == s.size());

		//int i = 0, j = 0;
		//for (j; j < t.size(); j++)
		//{
		//	if (s[i] == t[j]) {
		//		i++;
		//	}
		//}
		//return (i == s.size());
	}
};
int main()
{
	Solution slt1;
	cout << slt1.isSubsequence("ABxC", "ABAjkhvBkxiujgC");
}