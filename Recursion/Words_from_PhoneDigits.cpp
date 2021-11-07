//https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1
class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> rec(int a[], int N, vector<string> &arr, int currIdx, string &temp, unordered_map<int, string>& keypad){
        if(currIdx >= N){
            arr.push_back(temp);
            return arr;
        }
        string t = keypad[a[currIdx]];
        for(int i = 0; i < t.length(); i++){
            temp[currIdx] = t[i];
            rec(a,N,arr,currIdx+1,temp, keypad);
        }
        return arr;
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        unordered_map<int, string> keypad = {
            { 2, "abc" },
            { 3, "def" },
            { 4, "ghi" },
            { 5, "jkl" },
            { 6, "mno" },
            { 7, "pqrs" },
            { 8, "tuv" },
            { 9, "wxyz" },
        };
        vector<string> perms;
        string temp;
        temp.resize(N);
        return rec(a, N, perms, 0, temp, keypad);
    }
};