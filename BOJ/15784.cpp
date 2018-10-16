#include <bits/stdc++.h>

using namespace std;

int arr[1001][1001];

int main()
{
    int n, a, b;
    scanf(" %d %d %d", &n, &a, &b);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &arr[i][j]);
    bool flag = false;
    for(int i=0;i<n;i++)
        if(i!=b-1 && arr[a-1][b-1]<arr[a-1][i])
        {
            flag = true;
            break;
        }
    for(int i=0;i<n;i++)
        if(i!=a-1 && arr[a-1][b-1]<arr[i][b-1])
        {
            flag = true;
            break;
        }
    printf("%s", flag?"ANGRY":"HAPPY");

    return 0;
}