#include <iostream>
using namespace std;

void fun(int =10, int =20);

int main(){
	fun(); //no arg pass, it takes from default list
	fun(100); //user given argument is taken
	fun(1000, 2000); //user given argument is taken
}

void fun(int argOne, int argTwo){
	cout<<"void fun("<<argOne<<","<<argTwo<<") called"<<endl;
}

