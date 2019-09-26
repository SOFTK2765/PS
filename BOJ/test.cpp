#include <bits/stdc++.h>

using namespace std;

int a[10][10][10][10];

int main()
{
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            for(int k=0;k<10;k++)
                for(int l=0;l<10;l++)
                    a[i][j][k][l] = i*1000+j*100+k*10+l;
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            for(int k=0;k<10;k++)
                for(int l=0;l<10;l++)
                    cout << a[i][j][k][l] << endl;

    return 0;
}