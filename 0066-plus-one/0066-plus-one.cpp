class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     int i= digits.size()-1, carry=1;


     while(i>-1)
     {
        digits[i]=digits[i]+carry;
        carry=digits[i]/10;
        digits[i]=digits[i]%10;
        

        if(carry==0)
        break;

        i--;
     }

    if(carry > 0) { digits.insert(digits.begin(), carry); }

     return digits;

    }
};