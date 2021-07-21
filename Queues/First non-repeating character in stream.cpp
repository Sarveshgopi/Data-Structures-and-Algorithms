class Solution {
	public:
		string FirstNonRepeating(string A){
		    int a[26]={0},i;
		    std::queue<char> x;
		    std::string out="";
		    for(i=0;i<A.size();i++)
		    {
		        a[A[i]-97]++;
		        if(a[A[i]-97]==1)
		        {
		            x.push(A[i]);
		        }
		        while(!x.empty() && a[x.front()-97]>1)
		        {
		            x.pop();
		        }
		        if(x.empty())
		        {
		            out+="#";
		        }
		        else
		        {
		            out+=x.front();
		        }
		    }
		    return out;
		}

};
