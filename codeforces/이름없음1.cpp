#include <stdio.h>

int main()
{
	int n, m;
	int h, t, index, min, temp;
	
	scanf("%d %d", &n, &m);
	
	int a[n], b[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	
	for(int i=0;i<m;i++)
	{
		scanf("%d %d %d", &h, &t, &index);
		
		h--;
		t--;
		index--;
		
		for(int j=h;j<index+1;j++)
		{
			min=j;
			for(int k=j+1;k<=t;k++)
				if(b[k]<b[min]) min=k;
			temp=b[j];
			b[j]=b[min];
			b[min]=temp;
		}
		if(a[index]==b[index]) printf("Yes\n");
		else printf("No\n");
		for(int i=0;i<n;i++)
		{
			b[i]=a[i];
		}
	}
	
	return 0;
}
