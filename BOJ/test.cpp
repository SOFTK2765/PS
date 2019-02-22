#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);s
    int tmp = (int)(20.0*a/b);
    for(int i=0;i<tmp;i++)
        printf("■");
    for(int i=0;i<20-tmp;i++)
        printf("□");

    return 0;
}