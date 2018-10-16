#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

vector<string> a, b;

int main()
{
	int n, m;
	string s;
	cin >> n >> m;
	for(int i=0;i<n+m;i++)
	{
		cin >> s;
		a.push_back(s);
	}
	sort(a.begin(), a.begin()+n);
	sort(a.begin()+n, a.end());
	for(int i=0, j=0;i<n && j<m;)
	{
		if(a[i]==a[n+j])
		{
			b.push_back(a[i]);
			i++;
			j++;
		}
		else
		{
			if(a[i]<a[n+j]) i++;
			else j++;
		}
	}
	cout << b.size() << "\n";
	for(int i=0;i<b.size();i++)
		cout << b[i] << "\n";
	
	return 0;
}
