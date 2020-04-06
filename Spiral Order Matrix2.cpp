vector<vector<int> > Solution::generateMatrix(int A) {


   int i,k=0,l=0,m=A,n=A,count = 1;
    vector<vector<int> > solution(A,vector<int>(A));

  while(k<m&&l<n){
    for(i=l;i<n;i++){
      solution[k][i] = count;
      count++;
    }
    k++;
    for(i=k;i<m;i++){
      solution[i][n-1] = count;
      count++;
    }
    n--;
    if(k<m){
    for(i=n-1;i>=l;i--){
      solution[m-1][i] = count;
      count++;
    }
    m--;
    }  if(l<n){
      for(i=m-1;i>=k;i--){
        solution[i][l] = count;
        count++;
      }l++;

    }
  }
  return solution;
