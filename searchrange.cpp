int binarySearch(const vector<int> &A ,int n, int B , bool startFirst){

    int low = 0 ; int high = n - 1,result = -1;
    int mid = low+(high-low)/2;;
    while(low<=high){
        if(A[mid] == B){
            result = mid;
            if(startFirst){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }else if(A[mid] < B){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return result;
}


vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector<int> solution(2);

    int n = A.size();
    solution[0] = binarySearch(A,n,B,true);

    solution[1] = binarySearch(A,n,B,false);



    return solution;


}
