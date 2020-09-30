#include<iostream>

using namespace std;
int factorial(int x);

int main(){
	int num;
	cout<<"Inserte el numero el cual desea el factoral"<<endl;
	cin>>num;
	cout<<"El factorial del numero " <<num<< " es: " << factorial(num);
	
}

int factorial(int n){
	if(n < 0){
        return 0;
    }else if(n == 0){
       //caso base
        return 1;
    }else{
        //Dominio, problema -1
        return n * factorial(n-1);
    }
}
