/*  This is just a code snippet   */

class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        std::stack<long long> a;
        std::vector<long long> out;
        long long int i;
        a.push(arr[n-1]);
        out.push_back(-1);
        for(i=n-2;i>=0;i--)
        {
            while(!a.empty() && a.top()<=arr[i])
            {
                a.pop();
            }
            if(a.empty())
            {
                out.push_back(-1);
            }
            else
            {
                out.push_back(a.top());
            }
            a.push(arr[i]);
        }
        std::reverse(out.begin(),out.end());
        return out;
    }
};
