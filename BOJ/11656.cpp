#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

bool cmp(const string &a, const string &b)
{
	for(int i=0;;i++)
		if(a[i]!=b[i]) return a[i]<b[i];
}

int main()
{
	string s;
	cin >> s;
	vector<string> a(s.length());
	for(int i=0;i<s.length();i++)
		a[i]=s.c_str()+i;
	sort(a.begin(), a.end(), cmp);
	for(int i=0;i<s.length();i++)
		cout << a[i] << "\n";
	
	return 0;
}
