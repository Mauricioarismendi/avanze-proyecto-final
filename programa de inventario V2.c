#include<stdio.h>

 main(){
	int x;
	printf("\n                          INVENTARIO DE PRODUCTOS FFMMA                            \n\n");
	printf("\n    (1) Camisa Femenina   [Talla S]     (7)  Camisa Masculina    [Talla S]\n");
	printf("\n    (2) Camisa Femenina   [Talla M]     (8)  Camisa Masculina    [Talla M]\n");
	printf("\n    (3) Camisa Femenina   [Talla L]     (9)  Camisa Masculina    [Talla L]\n");
	printf("\n    (4) Pantalon Femenino [Talla 14]    (10)  Pantalon Masculino [Talla 14]\n");
	printf("\n    (5) Pantalon Femenino [Talla 16]    (11) Pantalon Masculino  [Talla 16]\n");
	printf("\n    (6) Pantalon Femenino [Talla 18]    (12) Pantalon Masculino  [Talla 18]\n");
	
	printf("\n\n     MARQUE EL NUMERO DEL PRODUCTO QUE QUIERA PARA PODER OBSERVAR SU PRECIO     \n ");
    printf("                 O TAMBIEN MARQUE 13 PARA PODER SALIR AL MENU: ");
    scanf("%d",&x);
    
	if(x>13){
		printf("\n\n+++++++++ NUMERO INVALIDO SELECCIONE CORRECTAMENTE UN NUMERO DE LA LISTA +++++++\n\n ");
		return main();
	}
	if(x<=0){ 
	printf("\n\n ++++++++ NUMERO INVALIDO SELECCIONE CORRECTAMENTE UN NUMERO DE LA LISTA +++++\n\n ");
		return main();	
	}
	
	switch (x){
		
		case 1:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 10$ ++++++++++++++  \n\n");
		return main();
		break;
		
		case 2:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 10$ ++++++++++++++  \n\n");
		return main();
		break;
		
		case 3:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 10$ ++++++++++++++  \n\n");
		return main();
		break;
		
		case 4:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 18$ ++++++++++++++  \n\n");
		return main();
		break;
		
		case 5:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 20$ ++++++++++++++  \n\n");
		return main();
		break;
		
		case 6:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 20$ ++++++++++++++  \n\n");
		return main();
		break;
		
		case 7:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 10$ ++++++++++++++  \n\n");
		return main();
		break;
		
		case 8:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 10$ ++++++++++++++  \n\n");
		return main();
		break;
		
		case 9:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 10$ ++++++++++++++  \n\n");
		return main();
		break;
		
		case 10:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 18$ ++++++++++++++  \n\n");
		return main();
		break;
		
		case 11:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 20$ ++++++++++++++  \n\n");
		return main();
		break;
		
		case 12:
		printf("\n\n\n ++++++++++++++++ El precio unitario de su busqueda es de 20$ ++++++++++++++  \n\n");
		return main();
		break;
		
		case 13:
		
		return 0;
		break;
	}
	
	
	
	
	
	
	
	
	
}

