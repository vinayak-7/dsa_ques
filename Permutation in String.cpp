class Solution {
public:
    bool checkEqual(int a[26], int b[26]){
        for(int i = 0; i < 26; i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
       int count[26]={0};

       for(int i = 0 ; i < s1.length() ; i++){
           int index = s1[i] - 'a';
           count[index]++;
       }

       int i = 0;
       int windowSize = s1.length();
       int count1[26] = {0};

       while(i<s2.length() && i < windowSize){
           int index = s2[i] - 'a';
           count1[index]++;
           i++;
       }

       if(checkEqual(count,count1)){
           return 1;
       }

       while(i < s2.length()){
           char newChar = s2[i];
           int index = newChar - 'a';
           count1[index]++;

           char oldChar = s2[i-windowSize];
           index = oldChar - 'a';
           count1[index]--;

           i++;

           if(checkEqual(count,count1)){
               return 1;
           }
       }
       return 0;
    }
};
