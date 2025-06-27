#include<iostream>
using namespace std;
int sum(int num1, int num2) {
    int sum=num1+num2;
    cout<<sum<<endl;
    return 0;
}
int main(){
    int num1=12,num2=5;
    sum(num1,num2);
}