vector<int> Solution::lszero(vector<int> &A) {
    int x,y;  // represent the start and end index of result

// declare a map to store key as sum to check if sum is present on not
// and value represent the index where particular sum appears first time
unordered_map<int,int> m;

int sum = 0,flag =0,diff =-1,curr=0;
// for zero sum our index will be -1  so key =0,value =-1
m[0] = -1;

for(int i=0;i<A.size();i++){
    //sum so far  including current element
    sum = sum+A[i];

    //if sum is not already present on map
    if(m.count(sum)==0){
        m[sum] = i;
    }
    // if the sum that is key of map is repeating that means we got a portion whose sum is 0
    else{
     // we got 1 portion atleat whose sum is 0 so mark flag
        flag =1;
// checking the portion size so that we can get the largest sequence whose sum=0
// store start and end of that portion in x and y
        curr = i - (m[sum]+1) + 1;
        if(curr > diff){
                 diff = curr;
                 x= m[sum]+1;
                 y = i;
        }
    }
}

vector<int> ans;
if(flag ==0){
    return ans;
}
for(int k=x;k<=y;k++){
    ans.push_back(A[k]);
}
return ans;
}
