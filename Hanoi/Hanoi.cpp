#include<iostream> 							//libreria de entradas y salidas

using namespace std;


void Hanoi(int m, int i, int j){            //Funcion hanoi recursiva
	
	if(m==1){
		cout << "Movimiento de la torre " << i << " a la torre " << j << endl;
		
}
	
	else{
		Hanoi(m-1,i,6-i-j);                                                       //variamos los parametros en base a nuestro
		cout << "Movimiento de la torre " << i << " a la torre " << j << endl;    // numero de fichas "m"
		Hanoi(m-1,6-i-j,j);
		}
}

int main(){

    cout<<"\n             -Torres de Hanoi-      \n";          // Metodo a Evaluar
	cout<<"      Rodolfo Martinez y Brenda Ortega    \n\n";   // Integrantes del Equipo
    
    unsigned int m ; // variables de entrada para la funcion "numero de Fichas"
    
    do
    {
        cout<<"Ingrese el numero de fichas: ";  // se pide un numero para efectuar el algoritmo
        cin>>m;                     // se guarda en "m"
        
    } while(m < 0);

	int vector[m];

	cout<< "\nTorres Iniciales. ";         //impresion de las condiciones iniciales
	cout<< "\nTorre 1: ";
	
	for(int i = 1; i <= m; i++){
    		vector[i] = i;
   		 	cout << vector[i];
			cout <<" ";
	  }

	cout <<" || ";
	cout <<"\n";
	cout<< "Torre 2: ";
	cout <<"\n";
	cout<< "Torre 3: ";
	cout <<"\n\n";


	int vector2[m];                                   //impresion de las condiciones finales

	cout<< "\nTorres Finales. ";
	cout<< "\nTorre 1: ";
	cout <<"\n";
	cout<< "Torre 2: ";
	cout <<"\n";
	cout<< "Torre 3: ";
	
	for(int k = 1; k <= m; k++){
    		vector2[k] = k;
   		 	cout << vector2[k];
			cout <<" ";
	  }
	cout <<" || ";
	cout <<"\n\n";
	cout<< "\nPasos para realizados: \n";              // A partir de este puntos se imprimen los pasos


 Hanoi(m,1,3);                                         //Llamamos a la funcion Hanoi para realizar el algoritmo

}
