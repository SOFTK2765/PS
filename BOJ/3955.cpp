#include <bits/stdc++.h>

using namespace std;

tuple<int, int, int> extEuc(int a, int b)
{
    int q = a/b, r = a%b;
    if(r==0) return make_tuple(b, 0, 1);
    tuple<int, int, int> res = extEuc(b, r);
    return make_tuple(get<0>(res), get<2>(res), get<1>(res)-q*get<2>(res));
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int k, c;
        scanf("%d %d", &k, &c);
        tuple<int, int, int> res = extEuc(-k, c);
        if(get<0>(res)==-1) res = make_tuple(1, -(get<1>(res)), -(get<2>(res)));
        if(c==1)
        {
            if(k+1>1000000000) printf("IMPOSSIBLE\n");
            else printf("%d\n", k+1);
        }
        else if(k==1) printf("1\n");
        else
        {
            if(get<0>(res)!=1) printf("IMPOSSIBLE\n");
            else if((get<2>(res)<0?(get<2>(res)+k)%k:get<2>(res))>1000000000) printf("IMPOSSIBLE\n");
            else printf("%d\n", get<2>(res)<0?(get<2>(res)+k)%k:get<2>(res));
        }
    }

    return 0;
}