/*  This isw just a code snippet   */

/*   Given an array A of positive integers. Your task is to find the leaders in the array.
An element of array is leader if it is greater than or equal to all the elements to its right side.
The rightmost element is always a leader.     */

class solution
{
  public:
        vector<int> leaders(int arr[],int n)
        {
            std::vector<int> out;
            int i,k=INT_MIN;
            for(i=n-1;i>=0;i--)
            {
               if(arr[i]>=k)
               {
                 k=arr[i];
                 out.push_back(k);
               }
            }
          std::reverse(out.begin(),out.end());
          return out;
        }
};
    
