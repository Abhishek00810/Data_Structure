class Solution {
public:
    int solve(string &s, char ch, int &k)
    {
        //if ch is T it means we are finding k F in T string 
        //vice versa
        int res= 0;
        int cnt = 0, left = 0;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]==ch)
                cnt++;
            while(cnt>k)
            {
                if(s[left]==ch) cnt--;
                left++;
            }
            res = max(res, i-left+1);
        }
        return res;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(solve(answerKey,'F', k),solve(answerKey,'T', k));
    }
};
