#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

void trabajosSegundoSemestre();
void primerParcial();
void segundoParcial();

//trabajos de el primer parcial 
void miPrimerTrabajo();
void sumadora();
void restadora();
void multiplicadora();
void divisora();
void operacionesBasicas();
void perimetroHexagono();
void areaTriangulo();
void cuadradoCuboNum();
void pesoDolar();
void porcentajeSalon();
void iva();
void perimetroOctagono();
void conversionGrados();
void tabladMultiplicar();
void hipotenusaTriangulo();
void sueldoSalario();
void precioLitros();
void promedios();
void productoPrecio();//jkjkljksjdkjskdjskjdkjdk doble p

//trabajos del segundo parcial
void estructuraSimple();
void estructuraDoble();
void estructuraMultiple();
void positivoNegativo();//programa para saber si un numero es positivo o negativo
void mayorDosNum();
void mayorTresNum();
void mayorEdad();
void multiploCinco(); 
void totalCamisas();
void pagoLlantera();
void veinteDescuento();
void numsAscendentes();
//creo que ya son todos los trabajos pero no estoy muy seguro
int main()
{
	trabajosSegundoSemestre();
	return 0;
}

void trabajosSegundoSemestre()
{
	int op
	bool repetir=true;
	
	do
	
	system("cls");

        cout << "\n\n\t\t\tSUB-MODULO 2 " << endl;
        cout << "\t\t\t--------------" << endl;
        cout << "\n\t1. Primer Parcial" << endl;
        cout << "\t2. Segundo Parcial" << endl;
        cout << "\t3. SALIR" << endl;
        
        cout<< "\n\tA que parcial quieres ir?"
        cin>>op;
        switch(op)
        {
        	case 1 
        	primerParcial();
        	break;
        	
        	case 2
        	segundoParcial();
        	break;
        	
        	case 3
        	repetir =false
        	break;
		}
	while(repetir);
}

//dios matame

void primerParcial()
{
	int op;
	bool repetir = true;
	
	do
	{
		system("cls");
		cout << "\n\n\t\t\tTRABAJOS PRIMER PARCIAL" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout<< "\n\t1. Mi primer trabajo en c++"<<end;
        cout<<"\t2. Sumadora"<<endl;
        cout<<"\t3. Restadora"<<endl;
        cout<<"\t4. Multiplicadora"<<endl;
        cout<<"\t5. Divisora"<<endl;
        cout<<"\t6. Operaciones basicas"<<endl;
        cout<<"\t7. Perimetro de un Hexagono"<<endl;
        cout<<"\t8. Area de un triangulo-rectangulo"<<endl;
        cout<<"\t9. Numeros al cubo y al cuadrado"<<endl;
        cout<<"\t10. Pesos a dolares"<<endl;
        cout<<"\t11. Porcentaje de hombres y mujeres en un salon"<<endl;
        cout<<"\t12. IVA de un producto"<<endl;
        cout<<"\t13. perimetro de un octagono"<<endl;
        cout<<"\t14. Conversor de c a f"<<endl;
        cout<<"\t15. Tablas de multiplicar"<<endl;
        cout<<"\t16. Hipotenusa de un triangulo"<<endl;
        cout<<"\t17. Sueldo semanal"<<endl;
        cout<<"\t18. Precio por litros"<<endl;
        cout<<"\t19. Promedios"
        cout<<"\t20 Precio de productos"<<endl;
        cout<<"\t0. Regresar"<<endl;
        cin>>op;
        
		switch(op)
		{
			case 1:
			miPrimerTrabajo();
			break;
			
			case 2:
			sumadora();
			break;
			
			case 3:
			restadora();
			break;
			
			case 4:
			multiplicadora();
			break;
			
			case 5:
			divisora();
			break;
			
			case 6:
			operacionesBasicas();
			break;
			
			case 7:
			perimetroHexagono();
			break;
			
			case 8:
			areaTriangulo();
			break;
			
			case 9:
			cuadradoCuboNum();
			break;
			
			case 10:
			pesoDolar();
			break;
			
			case 11:
			porcentajeSalon();
			
			case 12:
			    iva();
			    break;
			
			case 13:
			    perimetroOctagono();
			break;
			
			case 14:
			    conversionGrados();
			break;
			
			case 15:
			    tabladMultiplicar();
			break;
			
			case 16:
			    hipotenusaTriangulo();
			break;
			
			case 17:
			    sueldoSalario();
			break;
			
			case 18:
			    precioLitros();
			break;
			
			case 19:
			    promedios();
			break;
			
			case 20:
			    productoPrecio();
			break;
			
			case 0:
				repetir = false;
				break;
		}
	}while (repetir);
}
void segundoParcial();
{
	int op
	bool repetir = true;
	
	do
	{
		system("cls");
		cout << "\n\n\t\t\tTRABAJOS SEGUNDO PARCIAL" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout<< "\n\t1. Estructura simple"<<end;
        cout<<"\t2. Estructura doble"<<endl;
        cout<<"\t3. Estructura multiple"<<endl;
        cout<<"\t4. Numero postivo o negativo"<<endl;
        cout<<"\t5. Determinar el mayor de 2 numeros"<<endl;
        cout<<"\t6. Determinar el mayor de 3 numeros"<<endl;
        cout<<"\t7. Determinar si eres mayor de edad"<<endl;
        cout<<"\t8. Multiplos de 5"<<endl;
        cout<<"\t9. Total a pagar de camisas"<<endl;
        cout<<"\t10. Pago a la llantera"<<endl;
        cout<<"\t11. 20% de descuento"<<endl;
        cout<<"\t12. Numeros en orden ascendente"<<endl;
        cout<<"\t0. Regresar"<<endl;
        cin>>op;
        
        switch(op);
        {
        	case 1:
        		estructuraSimple();
        		break;
        	
        	case 2:
        		estructuraDoble();
        		break;
        		
        	case 3:
            	estructuraMultiple;
        		break;
        		
			case 4:
        	 positivoNegativo;
        		break;
				
				
			case 5:
				mayorDosNum();
				break;
			
			case 6:	
				mayorTresNum();
				break;
				
			case 7:
				mayorEdad();
				break;
				
			case 8:
				multiploCinco();
				break;
				
			case 9:
				totalCamisas();
				break;
				
			case 10:
				pagoLlantera();
				break;
			
			case 11:
				veinteDescuento();
				break;
				
			case 12:
				numsAscendentes();
				break;
			
			case 0:
				repetir = false;
				break;		
		}
		while(repetir)
	}
}

void miPrimerTrabajo()
{
	system("cls");

cout<<"hola pe causas"<<endl;

system("pause>nul");

}

void sumadora()
{
	system("cls");	
	float n1,n2, suma;

	cout<<"programa que suma 2 numeros"<<endl;
    cout<<""<<endl;
    cout<<"ingrese primer numero"<<endl;
    cin>>n1; //lectura de numero
    cout<<"ingrese segundo numero"<<endl;
    cin>>n2;//lectura de numero
    suma=n1+n2;
    cout<<"la suma es: "<<suma<<endl;
    
    system("pause>nul");
}

void restadora()
{
	system("cls");
	
	int numero1, numero2;
    float resultado;

    cout << "\n\tprograma que resta 2 numeros";
    cout << "\n\t====================\n";

    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;

    cout << "\tIngrese segundo numero: ";
    cin >> numero2;

    cout << "\t---------------------------" << endl;
    resultado = numero1 - numero2;
    cout << "\tResultado: " << resultado << endl;

    system("pause>nul");
}
void multiplicadora()
{
	system("cls");
	int numero1, numero2;
    float resultado;

    cout << "\n\tPrograma que divide 2 numeros";
    cout << "\n\t=======================\n";

    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;

    cout << "\tIngrese segundo numero: ";
    cin >> numero2;

    cout << "\t---------------------------" << endl;
    resultado = numero1 * numero2;
    cout << "\tResultado: " << resultado << endl;

    system("pause>nul");
}
void divisora()
{
	system("cls");

    int numero1, numero2;
    float resultado;

    cout << "\n\tPrograma que divide 2 numeros";
    cout << "\n\t========================\n";

    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;

    cout << "\tIngrese segundo numero: ";
    cin >> numero2;

    cout << "\t---------------------------" << endl;

    if (numero2 == 0)
    {
        cout << "\tResultado: No se puede dividir por cero." << endl;
    }
    else
    {
        resultado = numero1 / (numero2 * 1.0);
        cout << "\tResultado: " << resultado << endl;
    }

    system("pause>nul");
}
void operacionesBasicas()
{
	system("cls");
	
	float n1,n2,s,r,m,d;
	cout<<"programa de operaciones basicas"<<endl;
	cout<<""<<endl;
	cout<<"ingrese el primer numero"<<endl;
	cin>>n1;
	cout<<"ingrese el segundo numero"<<endl;
	cin>>n2;
	s = n1+n2;
	r = n1-n2;
	m = n1*n2;
	d = n1/n2;
	cout<<"la suma de "<<n1<< "+" <<n2<< " es : " <<s<<endl;
	cout<<"la resta de "<<n1<< "-" <<n2<< " es : " <<r<<endl;
	cout<<"la multiplicacion de "<<n1<< "X" <<n2<< " es : "<<m<<endl;
	cout<<"la division de "<<n1<< "/"<<n2<< " es : "<<d<<endl;
	
	system("pause>nu1");
}
void perimetroHexagono()
{
	system("cls");
	float p,l;

    cout<<"programa que calcule el perimetro de un octagono"<<endl;
    cout<<""<<endl;
    cout<<"ingrese la medida de un lado"<<endl;
    cin>>l;
    p = 6*l;

    cout<<"el perimetro de el octagono es :  "<<p<<endl;
    
    system("pause>nu1");
}
void areaTriangulo()
{
	system("cls");
	float base, altura;
    
    cout << "Ingrese la longitud de la base del triángulo: "<<endl;
    cin >> base;
    
    cout << "Ingrese la altura del triángulo: "<<endl;
    cin >> altura;
    
    float area = calcular_area_triangulo_rectangulo(base, altura);
    cout << "El área del triángulo rectángulo es: " << area << endl;
    
	system("pause>nu1");
}
void cuadradoCuboNum()
{
	system("cls");
	float numero;
    
    cout << "Ingresa un número: "<<endl;
    cin >> numero;
    
    float cuadrado = numero * numero;
    cout << "El cuadrado de " << numero << " es: " << cuadrado << endl;
    
    float cubo = numero * numero * numero;
    cout << "El cubo de " << numero << " es: " << cubo << endl;
    
    system("pause>nu1");
}
void pesoDolar()
{
	system("cls");
	float pesos;
    const float tipo_cambio = 0.050; // Tipo de cambio actual (1 MXN = 0.050 USD)
    
    // Solicitar al usuario que ingrese la cantidad de pesos
    cout << "Ingrese la cantidad de pesos mexicanos: "<<endl;
    cin >> pesos;
    
    float dolares = pesos * tipo_cambio;
    
    cout << "El equivalente en dólares es: $" << dolares << " USD" << endl;
    
    system("pause>nu1");
}
void porcentajeSalon()
{
	system("cls");
	
    int hombres, mujeres, total_personas;
    
    cout << "Ingrese el número de hombres en el salón: "<<endl;
    cin >> hombres;
    cout << "Ingrese el número de mujeres en el salón: "<<endl;
    cin >> mujeres;
    
    total_personas = hombres + mujeres;
    
    float porcentaje_hombres = (hombres / (float)total_personas) * 100;
    float porcentaje_mujeres = (mujeres / (float)total_personas) * 100;
    
    cout << "\nPorcentaje de hombres en el salón: " << porcentaje_hombres << "%" << endl;
    cout << "Porcentaje de mujeres en el salón: " << porcentaje_mujeres << "%" << endl;
    
    system("pause>nu1");
}
void iva()
{
	system("cls");
	
	float c,iva;
	cout<<"programa que calcula el IVA fr uns cantidad/a"<<endl;
	cout<<""<<endl;
	cout<<"ingrese la cantidad"<<endl;
	cin>>c;
	iva=c*.16;
	cout<<"el IVA de la cantidad "<<c<< " es: "<<iva<<endl;
	cout<<"y el total es: "<<iva+c<<endl;
	
	system("pause>nu1");
}
void perimetroOctagono()
{
	system("cls");
	
    double lado, perimetro;
    
    cout << "Ingrese la longitud del lado del octágono: "<<endl;
    cin >> lado;
    perimetro = 8 * lado;
    cout << "El perímetro del octágono es: " << perimetro << endl;
    
    system("pause>nu1");
}
void conversionGrados()
{
	system("cls");
	
    double celsius, fahrenheit;
    
    cout << "Ingrese la temperatura en grados Celsius: "<<endl;
    cin >> celsius;
    
    fahrenheit = (celsius * 9/5) + 32;
    
    cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << " F" << endl;
    
    system("pause>nu1");
}
void tabladMultiplicar()
{
	system("cls");
	
    int numero;
    cout << "Ingrese un número para calcular su tabla de multiplicar: "<<endl;
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
    cout << numero << " x " << i << " = " << (numero * i) << endl;
    }
    system("pause>nu1");
}
void hipotenusaTriangulo()
{
	system("cls");
    double lado1, lado2, hipotenusa;

    cout << "Ingrese la longitud del primer lado: "<<endl;
    cin >> lado1;
    cout << "Ingrese la longitud del segundo lado: "<<endl;
    cin >> lado2;
    hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));

    cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;
    
    system("pause>nu1");

}
void sueldoSalario()
{
	system("cls");
	
    int dias_trabajados;
    double sueldo_diario, sueldo_semanal, impuesto;
    cout << "Ingrese los días trabajados en la semana: ";
    cin >> dias_trabajados;
    cout << "Ingrese el sueldo diario: $";
    cin >> sueldo_diario;

    sueldo_semanal = dias_trabajados * sueldo_diario;

    impuesto = 0.075 * sueldo_semanal;
    double sueldo_neto = sueldo_semanal - impuesto;

    cout << "Sueldo semanal antes de impuestos: $" << sueldo_semanal << endl;
    cout << "Impuesto (7.5%): $" << impuesto << endl;
    cout << "Sueldo semanal después de impuestos: $" << sueldo_neto << endl;
    
    system("pause>nu1");
}
void precioLitros()
{
	system("cls");

    double litros_comprados, precio_por_litro, importe_sin_descuento, importe_con_descuento;
    cout << "Ingrese la cantidad de litros comprados: ";
    cin >> litros_comprados;
    cout << "Ingrese el precio por litro: $";
    cin >> precio_por_litro;
    importe_sin_descuento = litros_comprados * precio_por_litro;
    double descuento = 0.15 * importe_sin_descuento;
    importe_con_descuento = importe_sin_descuento - descuento;
    cout << "Importe sin descuento: $" << importe_sin_descuento << endl;
    cout << "Descuento (15%): $" << descuento << endl;
    cout << "Importe a pagar con descuento: $" << importe_con_descuento << endl;
    
    system("pause>nu1");
}
void promedios()
{
	system("cls");
	
	float a,b,c,d;

	cout<<"dame la calificacion de el cuestionario"<<endl;
	cin>>a;
	cout<<"ingresa tus calificaciones de tareas y practicas"<<endl;
	cin>>b;
	cout<<"dime tu calificacion de asistencia y participacion";
	cin>>c;
	
	d=a*0.40+b*0.40+c*0.20<<endl;
	cout<<"el promedio de el alumno fue de:  "<<d<<endl;
	
	system("pause>nu1");
}
void productoPrecio()
{
	system("cls");
	
	float a,b;
	int op;
	do {
	system("cls");
	cout << "      Opciones de frutas disponibles:" << endl;
    cout << "      1. Platano (Precio por kilo: $30)" << endl;
    cout << "      2. Mango (Precio por kilo: $33)" << endl;
    cout << "      3. Naranja (Precio por kilo: $25)" << endl;
    cout<<"        para salir presiona 4"<<endl;
    cout << "      Seleccione una opcion : "<<endl;
	cin>>op;
	switch(op){
		
		case 1:
			cout<<"cuantos kilos vas a querer?"<<endl;
			cin>>a;
			b=30*a;
			cout<<"el total seria "<<b<<endl;
			cin.get();
			break;
			
		case 2:
			cout<<"cuantos kilos vas a querer?"<<endl;
			cin>>a;
			b=33*a;
			cout<<"el total seria "<<b<<endl;
			cin.get();
			break;
		
		case 3:
		cout<<"cuantos kilos vas a querer?"<<endl;
		cin>>a;
		b=25*a;
		cout<<"el total seria "<<b<<endl;
		cin.get();
		break;
		
		case 4:
		cout<<"camara papi,ahi nos vidrios"<<endl;
		break;
		cin.get();
		default:
		cout<<"sacate pa"<<endl;
		cin.get();
	}
    cout<<"picale enter para continuar"<<endl;
    cin.get();
	
	system("pause>nu1");
}
//aqui termina el primer parcial,creo....
void estructuraSimple();
void estructuraDoble();
void estructuraMultiple();
void positivoNegativo();//programa para saber si un numero es positivo o negativo
void mayorDosNum();
void mayorTresNum();
void mayorEdad();
void multiploCinco(); 
void totalCamisas();
void pagoLlantera();
void veinteDescuento();
void numsAscendentes();
//creo que ya son todos los trabajos pero no estoy muy seguro

