#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	int cnt4 = 0, cnt7 = 0;
	bool flag = false;
	for(int i=0;i<n/2;i++)
		if(s[i]=='4') cnt4++;
		else if(s[i]=='7') cnt7++;
		else
		{
			flag = true;
			break;
		}
	for(int i=n/2;i<n;i++)
		if(s[i]=='4') cnt4--;
		else if(s[i]=='7') cnt7--;
		else
		{
			flag = true;
			break;
		}
	if(cnt4!=0 || cnt7!=0) flag = true;
	printf("%s", flag?"NO":"YES");

	return 0;
}