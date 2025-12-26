#include <iostream>
using namespace std;

void fun(int =10);

int main(){
	fun(); //no arg pass, it takes from default list
	fun(100); //user given argument is taken
}

void fun(int arg){
	cout<<"void fun("<<arg<<") called"<<endl;
}

