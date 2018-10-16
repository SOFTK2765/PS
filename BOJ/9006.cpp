#include <bits/stdc++.h>

using namespace std;

int a[1000001], b[1000001];
int n, m;

int bs1()
{
   int low = 0, high = n-1;
   double mid = (low+high)/2;
   while(low<=high)
   {
      mid = (low+high)/2;
      int midr = mid+1, midl = mid-1, suml = 0, sumr = 0;
      for(int i=0;i<n;i++)
         for(int j=0;j<m;j++)
            suml += (abs(a[i]-a[midl])+abs(b[j]-a[midl]));
      for(int i=0;i<n;i++)
         for(int j=0;j<m;j++)
            sumr += (abs(a[i]-a[midr])+abs(b[j]-a[midr]));
      if(suml<sumr) high = mid-1;
      else if(suml>sumr) low = mid+1;
      else return mid;
   }
   return mid;
}

int bs2()
{
   int low = 0, high = m-1;
   double mid = (low+high)/2;
   while(low<=high)
   {
      mid = (low+high)/2;
      int midr = mid+1, midl = mid-1, suml = 0, sumr = 0;
      for(int i=0;i<m;i++)
         for(int j=0;j<n;j++)
            suml += (abs(b[i]-b[midl])+abs(a[j]-b[midl]));
      for(int i=0;i<m;i++)
         for(int j=0;j<n;j++)
            sumr += (abs(b[i]-b[midr])+abs(a[j]-b[midr]));
      if(suml<sumr) high = mid-1;
      else if(suml>sumr) low = mid+1;
      else return mid;
   }
   return mid;
}

int main()
{
   int t;
   scanf("%d", &t);
   while(t--)
   {
      scanf(" %d %d", &n, &m);
      for(int i=0;i<n;i++)
         scanf(" %d", &a[i]);
      for(int i=0;i<m;i++)
         scanf(" %d", &b[i]);
      sort(a, a+n);
      sort(b, b+m);
      printf("%.1lf %.1lf\n", (double)bs1(), (double)bs2());
   }
   
   return 0;
}