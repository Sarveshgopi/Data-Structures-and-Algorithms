/*
Stickler the thief wants to loot money from a society having n houses in a single line. He is a weird person and follows a certain rule when looting the houses.
According to the rule, he will never loot two consecutive houses. At the same time, he wants to maximize the amount he loots.
The thief knows which house has what amount of money but is unable to come up with an optimal looting strategy. 
He asks for your help to find the maximum money he can get if he strictly follows the rule. Each house has a[i] amount of money present in it. */

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        int out[n]={0};
        out[0]=arr[0];
        out[1]=max(arr[0],arr[1]);
        int i;
        for(i=2;i<n;i++)
        {
            out[i]=max(out[i-2]+arr[i],out[i-1]);
        }
        return out[n-1];
    }
};
