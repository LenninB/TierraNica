#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(void)

{
	int opc();
	clrscr();
	printf("Elija una Opcion\n\nMenu");
	printf("1.suma\n 2.resta\n 3.multiplicacion\n 4.division\n 5.Salir");
	do 
	{

       scanf("%d", &opc);

	}while(opc<1||opc>5);
        menu()opc
        
	}




void menu(int opc);

int suma(int a, int b)
   {

        return a + b;
      }

int resta(int a, int b)
    {

      return a - b;
     }
int multiplicacion(int a, int b)
     {

       return a * b;
     }
int division(int a, int b)
     {

       return a / b;
      }

void menu (int opc)
     {
	int a,b, c,d, e,f, g,h, r1 , r2, r3, r4;
	clrscr();
     }


switch(opc)
 {
	case1 : printf("ingrese 2 numeros:\n");
	         scanf(%d, %d, &a,&b);
	         r1=suma(a,b);
	         printf("%d"r1); 
	         break;

	case2 : printf("ingrese 2 numeros:\n");
	         scanf(%d, %d, &a,&b);
	         r2=resta(a,b);
	         printf("%d"r2); 
	         break;

	case3 : printf("ingrese 2 numeros:\n");
	         scanf(%d, %d, &a,&b);
	         r3=multiplicacion(a,b);
	         printf("%d"r3); 
	         break;

	case4 : printf("ingrese 2 numeros:\n");
	         scanf(%d, %d, &a,&b);
	         r4=division(a,b);
	         printf("%d"r4); 
	         break;
}
getch();


