#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"\nIngrese un numero: ";
	cin>>n;
	cout<<"Los "<<n<<" primeros multiplos de 7 son: \n";
	for(int i=1;i<=n;i++){
		m=i*7;
		cout<<m<<endl;
	}
	return 0;	
}