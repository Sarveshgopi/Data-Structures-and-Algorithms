/* This is just a code snippet  */

/* Perfect number is the sum of its factors except that number is equal to the number  */

class Solution {
  public:
    int isPerfectNumber(long long N) {
        if(N==1)
        {
            return 0;
        }
        long long fact=1,i;
        for(i=2;i<=sqrt(N);i++)
        {
            if(N%i==0)
            {
                fact+=i;
                fact+=(N/i);
            }
        }
        return fact==N;
    }
};
