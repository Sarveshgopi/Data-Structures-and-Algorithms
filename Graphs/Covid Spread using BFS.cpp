/*

Aterp is the head nurse at a city hospital. City hospital contains R*C number of wards and the structure of a hospital is in the form of a 2-D matrix.
Given a matrix of dimension R*C where each cell in the matrix can have values 0, 1, or 2 which has the following meaning:
0: Empty ward
1: Cells have uninfected patients
2: Cells have infected patients

An infected patient at ward [i,j] can infect other uninfected patient at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time.
Help Aterp determine the minimum units of time after which there won't remain any uninfected patient i.e all patients would be infected.
If all patients are not infected after infinite units of time then simply return -1.    */


class Solution 
{
public:
    bool val(int d,int e,int m,int n,vector<vector<int>> &hospital)
    {
        if(d>=0 && d<m && e>=0 && e<n && hospital[d][e]==1)
        {
            return true;
        }
        return false;
    }
  
    int helpaterp(vector<vector<int>> hospital)
    {
        std::queue<pair<int,int> > a;
        int out=-1,s;
        int i,j,m=hospital.size(),n=hospital[0].size();
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(hospital[i][j]==2)
                {
                    a.push(make_pair(i,j));
                }
            }
        }
        while(!a.empty())
        {
            s=a.size();
            while(s--)
            {
                int x=a.front().first,y=a.front().second;
                if(val(x-1,y,m,n,hospital))
                {
                   a.push(make_pair(x-1,y));
                   hospital[x-1][y]=2;
                }
                if(val(x+1,y,m,n,hospital))
                {
                   a.push(make_pair(x+1,y));
                   hospital[x+1][y]=2;
                }
                if(val(x,y-1,m,n,hospital))
                {
                   a.push(make_pair(x,y-1));
                   hospital[x][y-1]=2;
                }
                if(val(x,y+1,m,n,hospital))
                {
                   a.push(make_pair(x,y+1));
                   hospital[x][y+1]=2;
                }
                a.pop();
            }
                out++;
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(hospital[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return out;
    }
};
