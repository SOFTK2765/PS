    #include <bits/stdc++.h>

    using namespace std;

    const int dx[] = {1, -1, 0, 0};
    const int dy[] = {0, 0, 1, -1};

    int a[50][5];

    int main()
    {
        int r1, c1, r2, c2;
        scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
        int ni = 4999, nj = 5000, n = 1;
        for(int i=0;i<5001;i++)
        {
            for(int j=0;j<i*2;j++)
            {
                n++;
                if(r1+5000<=ni && ni<=r2+5000 && c1+5000<=nj && nj<=c2+5000) a[ni-r1-5000][nj-c1-5000] = n;
                ni--;
            }
            ni++;
            nj--;
            for(int j=0;j<i*2;j++)
            {
                n++;
                if(r1+5000<=ni && ni<=r2+5000 && c1+5000<=nj && nj<=c2+5000) a[ni-r1-5000][nj-c1-5000] = n;
                nj--;
            }
            nj++;
            ni++;
            for(int j=0;j<i*2;j++)
            {
                n++;
                if(r1+5000<=ni && ni<=r2+5000 && c1+5000<=nj && nj<=c2+5000) a[ni-r1-5000][nj-c1-5000] = n;
                ni++;
            }
            ni--;
            nj++;
            for(int j=0;j<i*2;j++)
            {
                n++;
                if(r1+5000<=ni && ni<=r2+5000 && c1+5000<=nj && nj<=c2+5000) a[ni-r1-5000][nj-c1-5000] = n;
                nj++;
            }
        }
        int mx = 0;
        for(int i=0;i<r2-r1+1;i++)
            for(int j=0;j<c2-c1+1;j++)
            {
                mx = max(mx, a[i][j]);
                if(a[i][j]==0) a[i][j] = 1;
            }
        int cnt = 0;
        while(mx)
        {
            mx /= 10;
            cnt++;
        }
        for(int i=0;i<r2-r1+1;i++)
        {
            for(int j=0;j<c2-c1+1;j++)
                printf("%*d ", cnt, a[i][j]);
            printf("\n");
        }

        return 0;
    }