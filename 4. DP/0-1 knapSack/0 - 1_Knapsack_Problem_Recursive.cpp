/*

	Problem Link: https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

*/

//Recursive Solution
//Verdict : TLE

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       if(n==0 || w==0)    //if n is zero means ? not given wt[] / val[] || knapSack Weight is Zero.
            return 0; //profit will be zero
       if(wt[n-1] <= w)	//choices can be made from this as we got weight which is less than knapSack bag
            return max((val[n-1] + knapSack(w-wt[n-1],wt,val,n-1)), knapSack(w,wt,val,n-1));   //two conditions : 1) choose the given wt and recall for next, 2) not choose that one
        else if(wt[n-1] > w)
            return knapSack(w,wt,val,n-1);
    }
};

