#include <bits/stdc++.h>

using namespace std;

const pair<int, int> conp1[] = {{0, 0}, {1, 500}, {2, 300}, {4, 200}, {7, 50}, {11, 30}, {16, 10}, {22, 0}};
const pair<int, int> conp2[] = {{0, 0}, {1, 512}, {2, 256}, {4, 128}, {8, 64}, {16, 32}, {32, 0}};

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        int sum = 0;
        for(int i=0;i<8;i++)
            if(conp1[i].first>a)
            {
                sum += conp1[i-1].second;
                break;
            }
        for(int i=0;i<7;i++)
            if(conp2[i].first>b)
            {
                sum += conp2[i-1].second;
                break;
            }
        printf("%d\n", sum*10000);
    }

    return 0;
}