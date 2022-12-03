int Solution::majorityElement(const vector<int> &A) {
    int majorElement=A[0],count=1,n=A.size();
    for(int i=1;i<n;i++){
        if(count==0){
            majorElement=A[i];
            count=1;
        }
        else if(majorElement==A[i])
            count++;
        else
            count--;
    }
    return majorElement;
}