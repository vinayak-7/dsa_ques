class Solution {
private:
bool isValid(char ch){
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}
char tolowercase(char ch){
    if((ch>='a' && ch<='z')||(ch>='0'&& ch<='9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isPal(string str){
    
    int start = 0;
    int end = str.length()-1;
    while(start<=end){
        if((str[start]) != (str[end])){
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
public:
bool isPalindrome(string s) {
    int e = s.length();
    string str = "";
    for(int i = 0 ; i < e ; i++){
        if(isValid(s[i])){
            str.push_back(s[i]);
        }
    }
    for(int i = 0 ; i < str.length() ; i++){
        
        str[i] = tolowercase(str[i]);
        
    }
    return isPal(str);

}
};
