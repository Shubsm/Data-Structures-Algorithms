void sol(string A,int B ,string ans){
    if(B==0)
     return ;
    
    for(int i=0 ; i<A.size()-1 ;i++){
        for(int j=i+1; j<A.size();j++){
            if(A[j]>A[i]){swap(A[j],A[i]);
            if(A>ans)ans = A;
            sol(A,B-1,ans);
            swap(A[j], A[i]);
            }
        }
    }
  
}
string Solution::solve(string A, int B) {
    string ans = A;
   sol(A,B,ans);
   return ans;
}
