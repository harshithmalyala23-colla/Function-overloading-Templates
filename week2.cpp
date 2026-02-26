#include<bits/stdc++.h>
using namespace std;
int add(int a,int b){
     return a+b;
}
float add(float a,float b){
    return a+b;
}
template <class T>
void swapValue(T &x,T &y){
    T temp=x;
    x=y;
    y=temp;
}
int main(){
    int i1=10,i2=20;
    float f1=2.5,f2=4.5;
    string s1="Hello",s2="World";
    cout<<"Addition of integers:"<<add(i1,i2)<<"\n";
    cout<<"Addition of floats:"<<add(f1,f2)<<"\n";

    cout<<"Before swapping integers:"<<i1<<" "<<i2<<"\n";
    swapValue(i1,i2);
    cout<<"After swapping integers:"<<i1<<" "<<i2<<"\n";

    cout<<"Before swapping floats:"<<f1<<" "<<f2<<"\n";
    swapValue(f1,f2);
    cout<<"After swapping floats:"<<f1<<" "<<f2<<"\n";

    cout<<"Before swapping strings:"<<s1<<" "<<s2<<"\n";
    swapValue(s1,s2);
    cout<<"After swapping strings:"<<s1<<" "<<s2<<"\n";
return 0;
}