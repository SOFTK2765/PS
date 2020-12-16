#include <bits/stdc++.h>



using namespace std;



int a[46];

int b[46];



int main(void)

{

	int k=0;

	cin >> k;

	a[0]=1;

	b[0]=0;

	a[1]=0;

	b[1]=1;

	for (int i=2;i<k+1;i++)

	{

		a[i]=b[i-1];

		b[i]=a[i-1]+b[i-1];

	}

	for(int i=0;i<k;i++)
		printf("%d %d\n", a[i], b[i]);


	cout << a[k-1] << " " << b[k-1];

	return 0;

}