#include<iostream>
#include<bits/stdc++.h>
using namespace std;

float delta(float a,float b, float c){
	return b*b-4*a*c;
}
// ax^2+bx+c viet ham tinh delta b^2-4ac
void hoandoi(float &a, float &b){// & dung de tham chieu bien chu ko tao moi
	float c;
	c=a;
	a=b;
	b=c;
}
int main(){
//	float x,y=10;
//	cout<<"nhap x=";
//	cin>>x;
//	cout<<"x+y="<<x+y<<"\n";
//	cout<<"x-y="<<x-y;

	float a=2,b=1,c=7;
	hoandoi(a,b);
	cout<<a<<b;
	cout<<"delta"<<delta(a,b,c);
}
