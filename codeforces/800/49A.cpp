#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	getline(cin, a);
	int l = a.length();
	bool flag = false;
	for(int i=l-1;i>=0;i--)
		if(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z'))
		{
			if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='Y') flag = true;
			break;
		}
	printf("%s", flag?"YES":"NO");

	return 0;
}