/*Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.*/

#include <iostream>
#include <string>

void fizzBuzz(int n, std::string result[]) {
    for(int i = 1; i<=n; i++) {
        if(i%3 == 0 && i%5 == 0){
            result[i-1]= "FizzBuzz";
        }
        else if(i%3 == 0) {
            result[i-1]= "Fizz";
        }
        else if(i%5 == 0) {
            result[i-1]= "Buzz";
        }
        else {
            result[i-1] = std::to_string(i);
        }
    }
}

int main() {
    int t;
    std::cout <<"Enter the number of test cases: ";
    std::cin>>t;

    while (t--){
        int n;
        std::cout << "Enter the value of n for this test case: ";
        std::cin >> n ;

        std::string result[n];
        fizzBuzz(n,  result);

        std::cout << "FizzBuzz Output: "<<std::endl;
        for (int i=0; i<n; i++){
            std::cout << result[i]<<" ";
        }
        std::cout <<std ::endl;
    }
    return 0;
}