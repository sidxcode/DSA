#include<bits/stdc++.h>

using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> answer(n,"1");

    for(int i = 1; i<n; i++){
        if((i+1)%3==0){
            if((i+1)%5==0) {
                answer[i] = "FizzBuzz";
            }
            else{
                answer[i] = "Fizz";
            }
        }
        else if ((i+1)%5==0){
            answer[i] = "Buzz";
        }
        else{
            answer[i] = to_string(i+1);
        }
    }                                

    return answer;
}

int main(){

    int n;
    cout<<"Enter n ";
    cin>>n;

    vector<string> ans = fizzBuzz(n);

    cout<<"[ ";
    for(int i = 0 ; i <n ;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"]";    


    return 0;
}