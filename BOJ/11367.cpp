#include <bits/stdc++.h>

using namespace std;

char a[101];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        memset(a, 0, sizeof(a));
        int tmp;
        scanf(" %s %d", a, &tmp);
        printf("%s %s\n", a, tmp>96?"A+":tmp>89?"A":tmp>86?"B+":tmp>79?"B":tmp>76?"C+":tmp>69?"C":tmp>66?"D+":tmp>59?"D":"F");
    }

    return 0;
}