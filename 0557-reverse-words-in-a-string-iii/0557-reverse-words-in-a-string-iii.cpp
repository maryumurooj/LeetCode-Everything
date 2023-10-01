#include <string.h>
class Solution {
public:
    string reverseWords(string s) {
        string temp=s;
       int start=0;

      for(int i=0; i<=s.length(); i++)
      {
          if(s[i]==' ' || i==s.length()){
              for(int j= start, k=i-1; j<i; j++,k--)
              {
                  s[j]=temp[k];
              }
              start=i+1;
          }
      }
       
    return s;
    }
};