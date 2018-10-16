#include <bits/stdc++.h>

using namespace std;

char a[201];
int c[4] = {1, 0, 0, 2};

void swap(int i, int j)
{
    int tmp;
    tmp = c[i];
    c[i] = c[j];
    c[j] = tmp;
}

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    for(int i=0;i<l;i++)
        switch(a[i]-'A')
        {
            case 0:
                swap(0, 1);
                break;
            case 1:
                swap(0, 2);
                break;
            case 2:
                swap(0, 3);
                break;
            case 3:
                swap(1, 2);
                break;
            case 4:
                swap(1, 3);
                break;
            case 5:
                swap(2, 3);
        }
    for(int i=0;i<4;i++)
        if(c[i]==1) printf("%d\n", i+1);
    for(int i=0;i<4;i++)
        if(c[i]==2) printf("%d", i+1);

    return 0;
}