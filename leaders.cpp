class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> leader;
        
        int curr_ldr = a[n-1];
        
        leader.push_back(curr_ldr);
        
        for(int i = n-2 ; i >= 0 ; i-- )
        {
            if(curr_ldr <= a[i])
            {
                curr_ldr = a[i];
                leader.push_back(curr_ldr);
            }
        }
        
        reverse(leader.begin() , leader.end());
        return leader;
    }
};
