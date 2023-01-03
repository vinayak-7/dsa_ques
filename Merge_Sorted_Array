vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    while((m-1)>=0 && (n-1)>=0){
        if(arr1[m-1]>=arr2[n-1]){
                arr1[m+n-1] = arr1[m-1];
                m--;
            }
            else{
                arr1[m+n-1] = arr2[n-1];
                n--;
            }
    }
    while((n-1)>=0){
        arr1[n-1] = arr2[n-1];
        n--;
    }
    
    return arr1;
}
