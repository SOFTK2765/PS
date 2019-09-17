#include <bits/stdc++.h>

using namespace std;

int a[101];
bool check[101];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<k;i++)
        scanf(" %d", &a[i]);
    int cnt = 0, rescnt = 0;
    for(int i=0;i<k;i++)
        if(check[a[i]]) continue;
        else
        {
            if(cnt<n)
            {
                check[a[i]] = true;
                cnt++;
            }
            else
            {
                rescnt++;
                vector<int> candidate;
                for(int j=1;j<=k;j++)
                    if(check[j]) candidate.push_back(j);
                int size = candidate.size();
                for(int j=i+1;j<k;j++)
                {
                    for(int l=0;l<size;l++)
                        if(candidate[l]==a[j])
                        {
                            candidate.erase(candidate.begin()+l);
                            size--;
                            break;
                        }
                    if(size==1) break;
                }
                check[candidate[0]] = false;
                check[a[i]] = true;
            }
        }
    printf("%d", rescnt);

    return 0;
}