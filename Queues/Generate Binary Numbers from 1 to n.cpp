/*    This is just a code snippet    */


class solution
      public:
            vector<string> binary(int n)
            {
                 std::vector<string> out;
                 std::queue<string> a;
                 string curr;
                 a.push("1");
                 while(n--)
                 {
                    curr=a.front();
                    out.push_back(curr);
                    a.pop();
                    a.push(curr+"0");
                    a.push(curr+"1");
                 }
              return out;
            }
                   
