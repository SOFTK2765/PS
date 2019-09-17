#include <bits/stdc++.h>

using namespace std;

int dpmn[3], dpmx[3];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<3;i++)
    {
        scanf(" %d", &dpmn[i]);
        dpmx[i] = dpmn[i];
    }
    for(int i=1;i<n;i++)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        int dpmn0 = min(dpmn[0], dpmn[1])+tmp1, dpmx0 = max(dpmx[0], dpmx[1])+tmp1, dpmn1 = min(dpmn[0], min(dpmn[1], dpmn[2]))+tmp2, dpmx1 = max(dpmx[0], max(dpmx[1], dpmx[2]))+tmp2, dpmn2 = min(dpmn[1], dpmn[2])+tmp3, dpmx2 = max(dpmx[1], dpmx[2])+tmp3;
        dpmn[0] = dpmn0;
        dpmx[0] = dpmx0;
        dpmn[1] = dpmn1;
        dpmx[1] = dpmx1;
        dpmn[2] = dpmn2;
        dpmx[2] = dpmx2;
    }
    printf("%d %d", max(dpmx[0], max(dpmx[1], dpmx[2])), min(dpmn[0], min(dpmn[1], dpmn[2])));

    return 0;
}