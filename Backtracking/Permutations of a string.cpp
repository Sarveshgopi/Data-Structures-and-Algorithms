/*   This is just a code snippet   */

class Solution
{
	public:
	    void permutate(string S,int start,int end,vector<string> &out)
	    {
	          if(start==end)
	          {
	              out.push_back(S);
	          }
	          int i;
	          for(i=start;i<=end;i++)
	          {
	              swap(S[start],S[i]);
	              permutate(S,start+1,end,out);
	              swap(S[start],S[i]);
	          }
	    }
	    
		vector<string>find_permutation(string S)
		{
		    std::vector<string> out;
		    permutate(S,0,S.size()-1,out);
		    std::sort(out.begin(),out.end());
		    return out;
		}
};
