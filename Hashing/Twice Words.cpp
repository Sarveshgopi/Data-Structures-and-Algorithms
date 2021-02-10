/*   Given a list of strings, find out the number of strings that have repeated exactly twice */

/* This is just a code snippet  */

int twice_count(string list[],int n)
{
     std::unordered_map<string,int> a;
     int i,count=0;
     for(i=0;i<n;i++)
     {
         a[list[i]]++;
     }
     for(auto itr:a)
     {
        if(itr.second==2)
        {
            count++;
        }
    }
    return count;
}
