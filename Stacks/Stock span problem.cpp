/*  This is just a code snippet   */

class Solution
{
    public:
    vector <int> calculateSpan(int price[], int n)
    {
        std::stack<int> a;
        int i;
        std::vector<int> out;
        a.push(0);
        out.push_back(1);
        for(i=1;i<n;i++)
        {
            a.push(i);
            while(!a.empty() && price[a.top()]<=price[i])
            {
                a.pop();
            }
            if(a.empty())
            {
                out.push_back(i+1);
            }
            else
            {
                out.push_back(i-a.top());
            }
            a.push(i);
        }
        return out;
    }
};
