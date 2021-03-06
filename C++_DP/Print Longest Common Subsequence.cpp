#include <bits/stdc++.h>
using namespace std;
string rec(string s1, string s2, int l1, int l2)
{
    string s = "";
    int dp[l1+1][l2+1];
    for(int i = 0;i<l1+1;i++)
    {
        for(int j = 0;j<l2+1;j++)
        {
            if(i== 0 || j==0) dp[i][j] = 0;
        }
    }
    for(int i = 1;i<l1+1;i++)
    {
        for(int j =1 ;j<l2+1;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }
    int i = l1, j = l2;
    while(i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
            s+=s1[i-1];
            i--; j--;
        }
        else
        {
            if(dp[i][j-1]>dp[i-1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
    }
    string res = reverse(s.begin(),s.end());
    return res;
}
string printlcs(string s1, string s2)
{
    int l1 = s1.length();
    int l2 = s2.length();
    return rec(s1,s2,l1,l2);
}
int main() {
	string s1 = "abcde";
	string s2 =  "ace" ;
	cout<<printlcs(s1,s2);
	return 0;
}
