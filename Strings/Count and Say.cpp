/*
The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character. Then for each group, say the number of characters, then say the character. To convert the saying into a digit string, replace the counts with a number and concatenate every saying.


Given a positive integer n, return the nth term of the count-and-say sequence.
*/

class Solution {
public:
    string countAndSay(int n) {
        std::string a="1";
        while(n>1)
        {
            int hash[10]={0},i;
            std::string b="";
            hash[a[0]-48]++;
            for(i=1;i<a.size();i++)
            {
                if(a[i]==a[i-1])
                {
                    hash[a[i]-48]++;
                }
                else
                {
                    b+=to_string(hash[a[i-1]-48]);
                    b+=to_string(a[i-1]-48);
                    hash[a[i-1]-48]=0;
                    hash[a[i]-48]++;
                }
            }
            b+=to_string(hash[a[a.size()-1]-48]);
            b+=to_string(a[a.size()-1]-48);
            a=b;
            n--;
        }
        return a;
    }
};
