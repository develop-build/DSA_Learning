/*

	Problem Link: https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

*/

//Recursive Solution
//Verdict : passed

  int t[1001][1001]; //static matrix according to constraint
    
class Solution
{
    public:
    
    Solution(){   //Call via Constructor
         memset(t,-1,sizeof(t));
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       if(n==0 || w==0)
            return 0;
        if(t[n][w]!=-1)
            return t[n][w];  //changed recursive call to memorization code
       if(wt[n-1] <= w)
            return t[n][w] = max((val[n-1] + knapSack(w-wt[n-1],wt,val,n-1)), knapSack(w,wt,val,n-1));
        else if(wt[n-1] > w)
            return t[n][w] = knapSack(w,wt,val,n-1);
    }
};
