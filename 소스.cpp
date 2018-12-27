#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		
		int num{ 0 };
		string word;
		cin >> num >> word;
		
		string word2 = word.substr(0, num - 1);
		
		for (int j = num; j < word.length(); j++) {
			word2 = word2 + word[j];
		}
		cout << i + 1 << " " << word2 << endl;
		
	}

}