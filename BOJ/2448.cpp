#include <bits/stdc++.h>

using namespace std;

const int dx[] = {0, -1, 1};
const int dy[] = {-1, 1, 1};
const int tx[] = {-2, -1, -1, 0, 0, 1, 1, 2};
const int ty[] = {1, 1, 0, 1, -1, 1, 0, 1};

char a[3073][6144];

int fa(int n)
{
    if(n==1) return 1;
    return 2*fa(n-1)+n;
}

void f(int n, int x, int y)
{
    if(n==3)
    {
        for(int i=0;i<8;i++)
            a[y+ty[i]][x+tx[i]]='*';
        return;
    }
	int cnt = 0;
    int tmp = n/3;
    for(int i=0;;i++)
    {
        if(tmp%2==1) break;
        tmp /= 2;
        cnt++;
    }
	f(n/2, x, y+(n/3)*dy[0]);
    for(int i=1;i<3;i++)
    {
    	int tmp = cnt-2;
        if(cnt>=3) f(n/2, x+(n/2)*dx[i], y+cnt*dy[i]+fa(tmp));
		else f(n/2, x+(n/2)*dx[i], y+cnt*dy[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    f(n, n, n*2/3);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(a[i][j]=='\0')
            {
                printf(" ");
                continue;
            }
            printf("%c", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
