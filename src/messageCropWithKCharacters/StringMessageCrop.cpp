#include <iostream>

using namespace std;


string solution(string& A, int k)
{
	if (A.size() <= k)
	{
		while (A.back() == ' ') {
			A.pop_back();
		}
		return A;
	}

	string sub = A.substr(0, k + 1);

	if (sub.back() == ' ') // if k+1 element is a ' '
	{
		do {
			sub.pop_back();
		} while (sub.back() == ' ');

		return sub;
	}

	else // if k+1 element is not a ' '
	{
		int pos = sub.rfind(' ');

		string sub2 = sub.substr(0, pos);

		while (sub2.back() == ' ')
			sub2.pop_back();

		return sub2;
		 
	}

}

int main()
{
	string A = "codility we test coders   ";
	cout << "size before:" << A.size() << endl;

	cout << "Answer:" << solution(A, 14) << endl << "Expected answer: codility we" << endl;
	cout << "size after:" << A.size() << endl;

}
/* Given a message and an integer K, return the message cropped to no more that K characters as described below

Example: String is "Codility we test coders" and K= 14 should return "Codility we"

Condition: It maynot crop away a part of the word
the ouput message maynot end with space
the output message may not exceed "k" but should be as long as possible
*/
