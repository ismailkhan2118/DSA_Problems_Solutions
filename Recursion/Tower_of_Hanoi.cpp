//https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        if(N == 1){
            cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
            return 1;
        } 
        
        int t = toh(N-1, from, aux, to) + 1;// +1 for the next move
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        t += toh(N-1, aux, to, from);
        return t;
    }

};