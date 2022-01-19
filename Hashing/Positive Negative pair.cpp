/*
Complete the function findPairs() which takes the array A[] and the size of the array, n, as input parameters and returns a list of integers denoting the pairs.
The pair that appears first in A[] should appear first in the returning list and within the pair, the negative integer should appear before the positive integer.
Return an empty integer list if no such pair exists.
*/

class Solution{
  public:
    //Function to return list containing all the pairs having both
    //negative and positive values of a number in the array.
    vector <int> findPairs(int arr[], int n) 
    {
        std::vector<int> out;
        std::unordered_map<int,int> hash;
        int i,k;
        for(i=0;i<n;i++)
        {
            hash[arr[i]]++;
            if(hash[-arr[i]]!=0 && arr[i]!=0)
            {
                k=arr[i];
                if(arr[i]<0)
                {
                    k=abs(k);
                }
                out.push_back(-k);
                out.push_back(k);
                hash[arr[i]]--;
                hash[-arr[i]]--;
            }
        }
        if(out.size()==0)
        {
            out.push_back(0);
        }
        return out;
    }
};
