class Solution{
  public:
    //Complete this function

    int digitalRoot(int n)
    {
        //Your code here
        if(n < 10) return n;
        
        return digitalRoot(n%10 + n/10);
    }
};
