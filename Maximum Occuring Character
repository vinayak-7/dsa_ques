class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26] = {0};
        for(int i = 0; i < str.length() ; i++){
            int number = 0;
            if(str[i]>='a'&& str[i]<= 'z')
            {
                number = str[i] - 'a';
            }
            if(str[i]>='A'&& str[i]<= 'Z')
            {
                number = str[i] - 'A';
            }
            
            arr[number]++;
        }
        int maxi = -1 , ans;
        for(int i = 0; i < 26 ; i++){
            if(maxi < arr[i]){
                ans = i;
                maxi = arr[i];
            }
            
        }
        
        char fans = ans + 'a';
        
        return fans;
    }

};
