#include<bits/stdc++.h>
using namespace std;
#define max_size 101;
class stack{
private:
	int A[max_size];
	int top;
public:
	stack(int x){
		top=-1;
	}
	void push(int x){
		if(top==max_size-1){
			cout<<"stack overflows";
			return;
		}
		else
			A[++top]=x;
	}
	void pop(){
		if(top==-1)
		{
			cout<<"stack is empty";
			return;
		}
		else
			top--;

	}
};
int main(){
	stack s;
	s.push(10);
	s.push(12);
	s.push(2);
	s.pop();
	s.push(14);
}