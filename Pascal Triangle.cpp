vector<vector<int> > Solution::solve(int A) {

    vector<vector<int> > sol;

    for(int i=0 ; i < A ; i++){

        vector<int> c;
        for(int j =0 ; j <= i ; j++){

            if(i == j || j == 0){
                c.push_back(1);
            }else{

               int num  = sol[i - 1][j] + sol[i - 1][j - 1];
                c.push_back(num);
            }

        }

        sol.push_back(c);

    }
    return sol;
}
