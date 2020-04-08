int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int solution;
    int c;
    for(int i=0 ; i<A.size()- 2;i++){
        c = (A[i]+A[i + 1]+A[i + 2]);
        if(c == B){
            solution = c;
            break;
        }
        else if(B > c){
            solution = c;
        }
    }

    return solution;
}

}
