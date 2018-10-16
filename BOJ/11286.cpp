#include <stdio.h>
#include <queue>
#include <algorithm>

using namespace std;

struct comp
{
	bool operator()(int a, int b)
	{
		if(abs(a)==abs(b))
			return a>b;
		return abs(a)>abs(b);
	}
};

int main()
{
	int n;
	scanf("%d", &n);
	priority_queue<int, vector<int>, comp> a;
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d", &t);
		if(t==0)
		{
			if(a.empty()==true) printf("%d\n", 0);
			else
			{
				printf("%d\n", a.top());
				a.pop();
			}
			continue;
		}
		a.push(t);
	}
	
	return 0;
}
