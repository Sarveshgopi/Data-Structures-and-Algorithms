/* This is just a code snippet  */


queue<int> reverse_queue(queue<int> s)
{
     std::stack<int> a;
     while(!s.empty())
     {
          a.push(s.front());
          s.pop();
     }
     while(!a.empty())
     {
         s.push(a.front());
         a.pop();
     }
  return s;
}
