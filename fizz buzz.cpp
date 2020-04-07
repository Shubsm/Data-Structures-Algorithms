vector<string> Solution::fizzBuzz(int A) {
    vector<string> solution;
    for(int i=1 ; i<= A; i++){
        if(i%15 ==0){
            solution.push_back("Fizzbuzz");
        }
        else if(i%3 == 0){
            solution.push_back("Fizz");
        }
        else if(i%5 == 0){
            solution.push_back("Buzz");
        }else{

        solution.push_back(to_string(i));

        }
    }
    return solution;
}

