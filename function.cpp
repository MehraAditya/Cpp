#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;

}
int main(){
    int num1,num2;
    cout<<"Enter Number 1 ";
    cin>>num1;
    cout<<"Enter Number 2 ";
    cin>>num2;

    cout<<"The sum is "<<sum(num1,num2);
    return 0;
}