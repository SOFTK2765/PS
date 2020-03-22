#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    map<int, bool> mp;
	    int cnt = 0;
	    for(int i=0;i<n;i++)
	    {
	    	int tmp;
	        scanf(" %d", &tmp);
	        if(!mp[tmp])
	        {
	        	cnt++;
	        	mp[tmp] = true;
	        }
	    }
	    printf("%d\n", cnt);
	}	

	return 0;
}