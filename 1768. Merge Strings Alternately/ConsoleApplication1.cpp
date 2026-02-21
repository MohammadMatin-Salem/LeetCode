#include <iostream>
#include <string>

using namespace std;

// This Solution uses one iterator

class Solution {
public:
	string mergeAlternately(string word1, string word2) {
		int i = 0;
		string output;

		while (i < word1.size() || i < word2.size()) {
			if (i < word1.size()) output.push_back(word1[i]);
			if (i < word2.size()) output.push_back(word2[i]);
			i++;
		}

		return output;
	}
};



// This Solution uses two iterators

//class Solution {
//public:
//    string mergeAlternately(string word1, string word2) {
//        string mainstr = "";
//        int i = 0, j = 0;
//        int n1 = word1.size(), n2 = word2.size();
//
//        while (i < n1 || j < n2) {
//           if ( i < n1) mainstr += word1[i++];
//           if ( j < n2)mainstr += word2[j++];
//        }
//
//        return mainstr;
//    }
//};

int main()
{
	Solution slt1;
	string str1 = "Google";
	string str2 = "Amazon";

	cout << slt1.mergeAlternately(str1, str2);
}