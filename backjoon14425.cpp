#include <iostream>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	set<string> s;
	string str1,str2;

	int n, m, count = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> str1;
		s.insert(str1);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> str1;
		if (s.find(str1) != s.end())
			count++;
	}
	cout << count << endl;
}