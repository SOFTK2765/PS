#include <bits/stdc++.h>

using namespace std;

int k;
string s, t;
char alpa[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int value[200001];
int res[200001];

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cin>>k>>s>>t;


   for(int i = 0; i < k; i++)
   {
      value[i] = t[i]-s[i]; 
   }

   for(int i = k-1; i > 0; i--)
   {
      if(value[i]<0)
      {
         value[i-1]--;
         value[i]+=26;
      }
   }

   int temp = 0;
   for(int i = 0; i < k; i++)
   {
      temp *= 26;
      temp += value[i];
      if(temp>=2)
      {
         res[i] = temp/2;
         temp%=2;
      }
   }
   for(int i = 0; i < k; i++)
   {
      s[i] += res[i];
   }
   for(int i = k-1; i > 0; i--)
   {
      if(s[i]-'a'<=25)continue;
         s[i-1]++;
         s[i]-=26;
   }

   for(int i = 0; i < k; i++)
      cout<<s[i];

   return 0;
}