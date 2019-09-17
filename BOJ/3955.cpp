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
        tuple<int, int, int> res = extEuc(c, k);
        if(get<0>(res)!=1) res = extEuc(k/get<0>(res), c/get<0>(res));
        cout << get<0>(res) << " " << get<1>(res) << " " << get<2>(res) << endl;
        if(0>get<1>(res) && 0>get<2>(res)) printf("%d\b", (get<1>(res)+k)%k);
        else if(0<get<1>(res) && 0>get<2>(res)) printf("%d\n", get<1>(res));
        else printf("IMPOSSIBLE\n");
    }

    return 0;
}