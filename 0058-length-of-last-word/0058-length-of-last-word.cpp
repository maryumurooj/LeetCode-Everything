class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=0, j;

        for( j=s.length()-1; j>-1;j--)
        {
            if(s[j]!=' ')
            break;
        }

        for(int i=j; i>-1;i--)
        {
            if((s[i]!=' '))
            {
                l++;
            }
            else 
            break;
        }
        return l;
    }
};