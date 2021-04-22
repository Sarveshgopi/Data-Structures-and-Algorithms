#include<bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
     std::string input_str;
     std::cin>>input_str;
     std::string key;
     std::cin>>key;
     int count=0,start=0;
     while(count<input_str.size())
     {
          size_t pos=input_str.find(key,start);
          if(pos!=string::npos)
          {
               start=pos+1;
               count+=1;
          }
          else
          {
               break;
          }
