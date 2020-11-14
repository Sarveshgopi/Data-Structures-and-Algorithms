/*    TRAVERSING MEANS VISITING ALL THE ELEMENTS OF AN ARRAY EXACTLY ONCE  */
#include<bits/stdc++.h>
using namespace std;
int main()
{
     /* START OF THE SCRIPT */
     int *a;
     a=new int[100];
     int i,n;
     std::cin>>n;
     for(i=0;i<n;i++)
     {
         std::cin>>a[i];
     }
     for(i=0;i<n;i++)
     {
         std::cout<<a[i];
     }
   return 0;
   // END OF THE SCRIPT //
}
