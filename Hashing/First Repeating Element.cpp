/* This is just a code snippet  */

//arr is the input array and n is the size of the array are passed as the parameters and solved using internal hash table.

class solution
{
    public:
       int first_rep(int arr[],int n)
       {
           std::unordered_map<int,int> a;
           int i;
           for(i=0;i<n;i++)
           {
               a[arr[i]]++;
           }
           for(i=0;i<n;i++)
           {
              if(a[arr[i]]!=1)
              {
                  return i+1;
               }
            }
         return -1;
       }
  };
        
