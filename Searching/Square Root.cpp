long long int floorSqrt(long long int x) 
{
    if(x==0 || x==1)
    {
        return x;
    }
    int mid,start=0,stop=x;
    while(start<=stop)
    {
        mid=(start+stop)/2;
        if(mid==(x/mid))
        {
            return mid;
        }
        else if(mid<(x/mid))
        {
            start=mid+1;
        }
        else
        {
            stop=mid-1;
        }
    }
    return floor(stop);
}
