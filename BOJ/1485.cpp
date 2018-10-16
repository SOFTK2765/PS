#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        double a[5][2];
        for(int i=0;i<4;i++)
            for(int j=0;j<2;j++)
                scanf(" %lf", &a[i][j]);
        a[4][0] = a[0][0];
        a[4][1] = a[0][1];
        double l = sqrt(pow(a[1][0]-a[0][0],2)+pow(a[1][1]-a[0][1],2));
        printf("l : %lf\n", l);
        bool end = false;
        for(int i=1;i<4;i++)
            if(l!=sqrt(pow(a[i+1][0]-a[i][0],2)+pow(a[i+1][1]-a[i][1],2)))
            {
                printf("i : %d\n", i);
                printf("nl : %lf\n", sqrt(pow(a[i+1][0]-a[i][0],2)+pow(a[i+1][1]-a[i][1],2)));
                printf("%d\n", 0);
                printf("B1\n");
                end = true;
                break;
            }
        if(end) continue;
        for(int i=0;i<3;i++)
            if((a[i][0]-a[i+1][0])*(a[i+1][0]-a[i+2][0])+(a[i][1]-a[i+1][1])*(a[i+1][1]-a[i+2][1])!=0)
            {
                printf("%d\n", 0);
                printf("B2\n");
                end = true;
                break;
            }
        if(end) continue;
        printf("%d\n", 1);
    }

    return 0;
}