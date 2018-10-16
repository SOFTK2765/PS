#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        char a[5] = {};
        scanf("%s", a);
        if(strcmp(a, "P=NP")==0)
        {
            printf("skipped\n");
            continue;
        }
        else
        {
            char *tmp;
            tmp = strtok(a, " +");
            int sum = 0;
            while(tmp!=NULL)
            {
                sum += atoi(tmp);
                tmp = strtok(NULL, " +");
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}