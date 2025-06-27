#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int minOperations(vector<string> logs) {
        int main=0;
        for(auto log:logs){
            if(log=="../"){
                if(main>0){
                    main--;
                }
            }
            else if(log=="./"){

            }
            else{
                main++;
            }
        }
        return main;
}
int main(){
    vector<string>logs={"d1/","d2/","./","d3/","../","d31/"};
    int res=minOperations(logs);
    cout<<"result :- "<<res;
}