#include <iostream>
#include <cstring>

using namespace std;

string a;
char b[4];

int main()
{
	cin >> a;
	int l=a.length();
	if(l%3!=0)
	{
		for(int i=0;i<3-(l%3);i++)
			a="0"+a;
		l+=3-(l%3);
	}
	for(int i=0;i<l/3;i++)
	{
		int sum=0;
		for(int j=0;j<3;j++)
			b[j]=a[3*i+j];
		for(int j=0;j<3;j++)
		{
			sum*=2;
			sum+=b[j]-'0';
		}
		cout << sum;
		memset(b, 0, sizeof(b));
	}
	
	return 0;
}
