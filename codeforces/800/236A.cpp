#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	set<char> st;
	for(int i=0;i<l;i++)
		if(st.find(s[i])==st.end()) st.insert(s[i]);
	printf("%s", st.size()%2==0?"CHAT WITH HER!":"IGNORE HIM!");

	return 0;
}