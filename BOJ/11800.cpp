#include <bits/stdc++.h>

using namespace std;

const char trans1[][10] = {"", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
const char trans2[][10] = {"", "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        if(tmp1<tmp2) swap(tmp1, tmp2);
        printf("Case %d: ", tc);
        if(tmp1==6 && tmp2==5) printf("%s %s\n", trans1[tmp1], "Beesh");
        else if(tmp1!=tmp2) printf("%s %s\n", trans1[tmp1], trans1[tmp2]);
        else printf("%s\n", trans2[tmp1]);
    }

    return 0;
}