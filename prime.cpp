#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
bool isPrimeRecursive(int num,int i=2){
if(num<=1){
    return false;
}
if(num%i==0){
    return false;

}
if(num==2&num==3){
    return true;
}
if(i*i>num){
    return true;
}
return isPrimeRecursive(num,i+1);


}

int main(){
    int num1,num2,num3;
    cout<<"ENTER THREE NUMBER:\n";
    cout<<"...................\n";
    cin>>num1>>num2>>num3;


    if(isPrimeRecursive(num1)){
        cout<<"THE NUMBER IS PRIME:"<<setw(13)<<num1<<endl;
    }
    else{
        cout<<"THE NUMBER IS NOT PRIME:"<<setw(10)<<num1<<endl;
    }

    if(isPrimeRecursive(num2)){
        cout<<"THE NUMBER IS PRIME:"<<setw(13)<<num2<<endl;
    }
    else{
        cout<<"THE NUMBER IS NOT PRIME:"<<setw(10)<<num2<<endl;
    }

    if(isPrimeRecursive(num3)){
        cout<<"THE NUMBER IS PRIME:"<<setw(13)<<num3<<endl;
    }
    else{
        cout<<"THE NUMBER IS NOT PRIME:"<<setw(10)<<num3<<endl;
    }

    return 0;









}
