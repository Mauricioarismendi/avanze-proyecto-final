#include<stdio.h>
#include<string.h>
#include <stdlib.h>

typedef char cadena[100];

 const int ELEMENTOS=50;
 

struct Fecha
{
	int dd;
	int mm;
	int aa;

};



struct Producto
{
	int codigo;
	cadena nombreproducto;
	cadena talla;
	float costo;
	float venta;
    struct Fecha fechaIngreso;
	
};
	
	void CargarProductos(struct Producto vec[ELEMENTOS], int N){
		int i=0;
		printf("Rellenar los datos para ingresar el nuevo producto. \n\n");
		
		for(i;i<N;i++){
			
			printf("Producto %d\n",i);
			
			printf("Codigo del producto: ");
			scanf("%d",&vec[i].codigo);
			
			printf("Nombre del producto: ");
			_flushall();
			gets ( vec[i].nombreproducto);
			
			printf("Talla: ");
				_flushall();
			gets ( vec[i].talla);
			
			printf("El costo: ");
			scanf("%f",&vec[i].costo);
			
			printf("Precio que tendra para la venta: ");
			scanf("%f",&vec[i].venta);
			
			printf("Fecha de ingreso del producto: \n");
			printf("dd: \n");
			scanf("%d",&vec[i].fechaIngreso.dd);
			
			printf("mm: \n");
			scanf("%d",&vec[i].fechaIngreso.mm);
			
			printf("aa: \n");
			scanf("%d",&vec[i].fechaIngreso.aa);
			
			system ("cls");
		}
		
		
	}
	
	
		void ListarProductos(struct Producto vec[ELEMENTOS], int N){
		
		printf("Listado de Empleados");
		int i=0;
		for(i;i<N;i++){
			printf("\n\nCodigo: %d ", vec[i].codigo);
			printf("\nNombre del producto: %s",vec[i].nombreproducto);
			printf("\nTalla: %s",vec[i].talla);
			printf("\nCosto del producto: El costo del producto: %.2f",vec[i].costo);
			printf("\nPrecio de venta: %.2f",vec[i].venta);
			printf("\nFecha de Ingreso del producto: %d - %d - %d", vec[i].fechaIngreso.dd, vec[i].fechaIngreso.mm, vec[i].fechaIngreso.aa);
			
		}
		
		}
	
main(){
	
	struct Producto productos[ELEMENTOS];
	int N = 0;
	
	printf("Cantidad de Productos para ingresar: ");
	scanf("%d",&N);
	
	CargarProductos(productos, N); 
	
	system("cls");
	
	printf("\n\n");
	system ("pause");
	
	ListarProductos(productos, N);
	
		printf("\n\n");
	system ("pause");
	
	
}

