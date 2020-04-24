vector<vector<int> > sol;
 
 void helper(TreeNode* A,vector<int> s){
     
         stack<TreeNode*> s1;
         stack<TreeNode*> s2;
         s1.push(A);
         
         while(s1.size()!=0 || s2.size()!=0){
             while(s1.size()!=0){
                 s.push_back(s1.top()->val);
                 
                  if(s1.top()->left!=NULL)

               s2.push(s1.top()->left);

               if(s1.top()->right!=NULL)

              s2.push(s1.top()->right);

                s1.pop();
             }
             if(s.size()!=0)
        sol.push_back(s);
        s.clear();
             
              while(s2.size()!=0){

      s.push_back(s2.top()->val);

      if(s2.top()->right!=NULL)

        s1.push(s2.top()->right);

      if(s2.top()->left!=NULL)

        s1.push(s2.top()->left);

      

      s2.pop();

    }
    if(s.size()!=0)
        sol.push_back(s);
        s.clear();
         }
          
     
 }
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    sol.clear();
    vector<int> s;
    helper(A,s);
    return sol;
}
