// count zeroes in the range where (num of zeroes > num of ones)
// and find their max


class Solution
{
    public:
    int maxOnes(int a[], int n)
    {
        int i,out=0,maxi=0,one=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                out++;
            }
            else
            {
                out--;
                one++;
            }
            if(out<0)
            {
                out=0;
            }
            maxi=max(out,maxi);
        }
        return maxi+one;
    }
};
