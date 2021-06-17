/* 

A number is called a stepping number if all adjacent digits have an absolute difference of 1, e.g.
'321' is a Stepping Number while 421 is not. Given two integers n and m, find the count of all the stepping numbers in the range [n, m].

*/



class Solution
{
public:

    int steppingNumbers(int n, int m)
    {
        std::queue<int> a;
        std::unordered_set<int> t;
        int out=(n==0)?1:0;
        for(int i=1;i<=9;i++)
        {
            a.push(i);
            if(i>=n && i<=m)
            {
                out++;
            }
        }
        int f,k,p;
        while(true)
        {
            f=a.front();
            if((f%10)-1>=0)
            {
                k=(f*10)+((f%10)-1);
            }
            if((f%10)+1<=9)
            {
                p=(f*10)+((f%10)+1);
            }
            if(k>m)
            {
                break;
            }
            else
            {
                if(t.find(k)==t.end())
                {
                   if(k>=n)
                   {
                      out++;
                   }
                   a.push(k);
                   t.insert(k);
                }
            }
            if(p>m)
            {
                break;
            }
            else
            {
                if(t.find(p)==t.end())
                {
                    if(p>=n)
                    {
                       out++;
                    }
                   a.push(p);
                   t.insert(p);
                }
            }
            a.pop();
        }
        return out;
    }
};
