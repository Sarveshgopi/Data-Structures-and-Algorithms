/*

Given a String S, Find all possible Palindromic partitions of the given String.

Input:

S = "geeks"

Output:
g e e k s
g ee k s

*/


class Solution {
  public:
  bool palindrome(string p)
  {
      int len=p.size();
      for(int j=0;j<len/2;j++)
      {
          if(p[j]!=p[len-j-1])
          {
              return false;
          }
      }
      return true;
  }
  
  void createpal(string S,vector<string> &temp,vector<vector<string>> &out,int ind)
  {
        if(ind==S.size())
        {
            out.push_back(temp);
            return ;
        }
        int i;
        std::string str="";
        for(i=ind;i<S.length();i++)
        {
            str+=S[i];
            if(palindrome(str))
            {
                temp.push_back(str);
                createpal(S,temp,out,i+1);
                temp.pop_back();
            }
        }
  }
  
 vector<vector<string>> allPalindromicPerms(string S) {
         std::vector<vector<string> > out;
         std::vector<string> temp;
         createpal(S,temp,out,0);
         return out;
    }
};
