#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int opcion;
    bool repetir = true;

    do{
        system("cls");
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "4. Opcion 4" << endl;
        cout << "0. SALIR" << endl;

    



    cout << "\nIngrese una opcion: ";
     cin >> opcion;
        
    switch (opcion) {
        case 1:
        float monto;
        cout << "INGRESE MONTO DE COMPRA :";
        cin >> monto;
        
        if (monto<200){
            cout<<"NO SE APLICA DESCUENTO"<<(monto);
            cout<<"DESCUENTO DEL 0%"<<(monto);
            cout<<endl; 
        }
        else if (monto<=300 & monto>200){
            cout<<"SE APLICA UN DESCUENTO DEL 5%"<<(monto*0.05);
            cout<<"DESCUENTO DEL 5%"<<(monto*0.95);
            cout<<endl;
        }
        else if (monto>=300 & monto<500){
            cout<<"SE APLICA UN DESCUENTO DEL 10%"<<(monto*0.1);
            cout<<"DESCUENTO DEL 10%"<<(monto*0.9);
            cout<<endl;
        }
        else if(monto>=500){
            cout<<"SE APLICA UN DESCUENTO DEL 15%"<<(monto*0.15);
            cout<<"DESCUENTO DEL 15%"<<(monto*0.85);
            cout<<endl;
        }
        return 0;
        system ("pause>nul"); // Pausa
        break;

        case 2:
        float descuento, precioIVA, des, cantidaddescuento, precioProducto, preciodesc,  precioFinal;
	    int edad;

        cout << "precio de tu compra: " << endl;
        cin >> precioProducto;
        cout << "edad del cliente: " << endl;
        cin >> edad;

        precioIVA = precioProducto * 0.16;
        precioFinal = precioProducto + precioIVA ; 

        if (edad >= 60){
            (des= 0.50);
            cantidaddescuento =(precioFinal * des);
	        preciodesc = (precioFinal -cantidaddescuento);
	        (descuento= 50);
        }
        else if (edad <= 60 && edad >= 50){
            (des= 0.30);
	        cantidaddescuento =(precioFinal * des);
	        preciodesc = (precioFinal -cantidaddescuento);
	        (descuento= 30);
        }
        else if (edad < 50){
            (des= 0); 
	        cantidaddescuento =(precioFinal * des);
	        preciodesc = (precioFinal -cantidaddescuento);
            (descuento= 0);
        }
        cout << "El monto total a pagar con descuento incluido es de: " << preciodesc << endl;
        cout << "Cantidad del descuento: " << cantidaddescuento << endl;
		cout << "descuento es de: %" << descuento << endl;

        system ("pause>nul"); // Pausa
        break;   

        case 3:
        // Lista de instrucciones de la opción 3
        int horase,horast,tarifa,tarifae,salario;
        cout << "Ingresa tus horas trabajadas" << endl;
        cin >> horast;
		cout << "Ingrese el valor de la hora trabajadas" << endl;
		cin >> tarifa;

        if (horast<40) {
			salario = horast*tarifa;
			cout << "Salario devengado es: " << salario << endl;
        } else {
			tarifae = tarifa+10;
			horase = horast-40;
			salario = horase*tarifae+40*tarifa;
			cout << "La cantidad de horas extras es: " << horase << endl;
		}
        cout << "Valor de la hora normal es : " << tarifa << endl;
		cout << "Valor de la hora extra es : " << tarifae << endl;
		cout << "El saldo a pagar es de : " << salario << endl;

        system ("pause>nul"); // Pausa            
        break;

        case 4:
         // Lista de instrucciones de la opción 4  
        int N;
        //Pedimos al usuario que Ingrese un número 
        cout<<"ingrese un numero"<<endl;
    //Obtenemos el número y lo ingresamos a la maquina
        cin>>N; 
//Mediante esta 
         for(int i=2;i<N+1;i++){
            int creciente =2;
            bool esPrimo = true;

            while (esPrimo && creciente<i){

                if (i % creciente == 0){
                    esPrimo = false;
                }
                else{
                    creciente++;
                }

            }
            if (esPrimo){
                cout<<i<< " es un numero primo."<<endl;
            }

         }

         
        
        system("pause>nul"); // Pausa                
        break;

        case 0:
        repetir = false;
        break;

    }
    }while(repetir);
    


           
     
return 0;
}

        
       