//to left
void moveZerosToLeft(int *arr, int n) 
{
    // Write your code here
    int i=n-1;    
    for(int j=n-1;j>=0;j--){        
        if(arr[j]!=0){            
            swap(arr[i],arr[j]);            
            i--;  
        }
    }
}
//to right
void pushZerosAtEnd(vector<int> &arr) 
{
	// Write your code here.
    int i = 0;
    
    for(int j = 0; j < arr.size() ; j++){
        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
