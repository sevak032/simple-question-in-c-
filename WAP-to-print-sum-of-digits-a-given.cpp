#include<iostream>
using namespace std;
int main (){

    int n;
    cout<<"Enter The Number : ";
    cin>>n;

    int sum=0;
    while(n!=0){
        int ldigit = n%10;
        n/=10;
        sum+=ldigit;

    }
    cout<<sum;
}