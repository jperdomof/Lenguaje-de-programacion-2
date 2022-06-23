#include <iostream>
#include "startShip.h"
#include <cstdlib>
#include "snake.h"

using namespace std;

int main()
{

	system("cls");
	int opcion;
	
	 cout<<"    *********** ";
	 cout<<"    Menu de Juego ";
	 cout<<"    ***********";
	 cout<<endl;
	 cout<<endl;
	 cout<<"Seleccion una opcion: "<<endl;
	 cout<<endl;
	 cout<<"1-Juego StarShip"<<endl;
	 cout<<endl;
	 cout<<"2- Juego Snake"<<endl;
	 cout<<endl;
	
	 
		do
	{
		 cout<<"Ingrese una opcion: "<<endl;
		 cin>>opcion;
		 
		 switch(opcion)
	 {
	 	case 1:
	 		{
	 			system("cls");
				starShip();
				system("pause");
			 }
		case 2:
			{
				system("cls");
				snake();
				system("pause");
			}
		
			
	 }
}while(opcion > 2);
	 
		 
			 
	 
 return 0;
}

