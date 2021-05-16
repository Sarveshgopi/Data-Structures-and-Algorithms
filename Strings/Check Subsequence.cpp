#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int *argv,char **argc)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    std::string main,sub;
    std::cin>>main;
    std::cin>>sub;
    ll i,x=0; 
    for(i=0;i<main.size();i++)
    {
        if(main[i]==sub[x])
        {
            x++;
            if(x==sub.size())
            {
                std::cout<<"Found"<<endl;
                exit(0);
            }
        }
    }
    std::cout<<"Not Found"<<endl;
    return 0;
}
