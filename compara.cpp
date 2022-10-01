#include<iostream>
using namespace std;
//CREADO karina cimarron añapa
int main() 
{
	float k,c;
	cout<<"ingrese su primer numero que desea comparar:   ";
	cin>> k;
	cout<<"ingrese su  segundo numero que desesa comparar:  ";
	cin>> c;
	if(k==c)
	{
		cout<<" primer numero es mayor:  ";
	}
	
	else if(k>c)
	{
		cout<<"son iguales:  ";
	}
	else if(k<c)
	{  
		cout<<" segundo nuemro es mayor:  ";
	}
	return(0);
}
