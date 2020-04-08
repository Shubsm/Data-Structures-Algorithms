void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

   int i=0,j=A.size()- 1;
   while(i<j){
       if(A[i]==2 && A[j]== 0){
           swap(A[i],A[j]);
           i++;
           j--;
       }else if(A[j]==2){
           j--;
       }else if(A[i]==0){
           i++;
       }
   }
}
