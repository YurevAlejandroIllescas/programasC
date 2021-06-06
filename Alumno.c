//Registro de alumnos y funciones basicas

#include <stdio.h>
#include <stdlib.h>

//Constantes
#define MAX_ALUMNOS 100
#define MAX_PROFESORES 20
//Tipos
typedef struct/*TrFecha*/ {
	
	int eDia, eMes, eAnio;
	
} TrFecha;

typedef char TaCadena [100];

typedef struct/*TrDireccion*/{
	
	TaCadena cCalle, cColonia, cAlcaldia;
	int eNumInt, eNumExt, eCodigoP;
	
}TrDireccion;

typedef struct /*TrAlumno*/{ 
	
	TaCadena cNombre, cCorreoE;
	TrDireccion rDireccion;
	TrFecha rFecCumpleanios;
	TaCadena cCarrera, cMatricula;
	int eID;
	long int  eTelefono;
	int eSemestre;
	
} TrAlumno;



typedef TrAlumno TaAlumnos [MAX_ALUMNOS];

//Prototipos
TrAlumno LeerAlumno();
void InsertarAlumno(TaAlumnos, int*, TrAlumno);
int BuscarAlumnoPorId (TaAlumnos, int, int);
int GenerarIdAlumno();
int LeerIdAlumno (TaCadena, int, int);
void MostrarDatosAlumno(TrAlumno);
void ConsultarAlumnosPorId(TaAlumnos, int, int);
void BorrarAlumno (TaAlumnos, int *, int eID);
void ModificarAlumno(TaAlumnos, int, int );
void ListarAlumnos (TaAlumnos, int);
void Menu_Alumnos();

//Programa principal
int main(){

	Menu_Alumnos();
}

//Procedimiento principal
void Menu_Alumnos(){

	static int eTotal = -1;
	int eOpcion, eID;
	TrAlumno rAlumno;
	static TaAlumnos aAlumnos;
	
	do{
	
		system("cls");
		printf("Administrac%cn de alumnos\n", 162);
		printf("\n1. Alta alumno\n2. Baja Alumno\n3. Modificar datos del alumno\n4. Consultar alumno\n5. Listar alumno\n6. Regresar a men%c principal\n\n", 163 );
		printf("Seleccione una opcion: ");
		scanf("%d", &eOpcion);
		system("cls");
		switch(eOpcion){
			
			case 1: printf("\n\t\tAdministraci%cn de alumnos. Registrar Alumno.\n", 162);
					rAlumno = LeerAlumno();
					InsertarAlumno(aAlumnos, &eTotal, rAlumno);
					break;
							
			case 2: printf("\n\t\tAdministraci%cn de alumnos. Borrar alumno.\n", 162);
					eID = LeerIdAlumno("borrar", eTotal, aAlumnos[eTotal].eID);
					
					if (eID > -1){					
						BorrarAlumno(aAlumnos, &eTotal, eID);	
					}					
		  			break;
		  			
			case 3: printf("\n\t\tAdministraci%cn de alumnos. Modificar Datos de alumno.\n", 162);
					eID = LeerIdAlumno("modificar", eTotal, aAlumnos[eTotal].eID);
					
					if (eID > -1){					
						ModificarAlumno(aAlumnos, eTotal, eID);	
					}
					break;
					
			case 4: printf("\n\t\tAdministraci%cn de alumnos. Consultar alumnos.\n", 162);
					eID = LeerIdAlumno("consultar", eTotal, aAlumnos[eTotal].eID);
										
					if (eID > -1){										
						ConsultarAlumnosPorId(aAlumnos, eTotal, eID);
					} 					
					
					break;
			
			case 5: 										
					printf("ID	Matricula  Nombre                Correo electronico     		Telefono            Fec. Nacimiento    Domicilio 								Carrera	Semestre\n", 164);
					printf("_____________________________________________________________________________________________________________________________________________________________________\n");
					ListarAlumnos(aAlumnos, eTotal);
					break;
	
			case 6: printf("Regresando a men%c principal...", 163);
					break;
		
			default: printf("Error en la selecci%cn", 162);
					break;	  	
		}
		
		fflush(stdin);
		getchar();
		
	}while(eOpcion != 6);
	
} //main

//Leer Alumnos
TrAlumno LeerAlumno(){
	
	TrAlumno rAlumno;
	int eID;
	
	printf("\n\tIngrese los siguientes datos del alumno: \n");

	printf("\nMatricula: ");
	fflush(stdin);
	gets(rAlumno.cMatricula);
	
	printf("\nNombre del alumno: ");
	fflush(stdin);
	gets(rAlumno.cNombre);
	
	printf("\nCorreo electronico: ");
	fflush(stdin);
	gets(rAlumno.cCorreoE);
	
	printf("\nTelefono contacto: ");
	fflush(stdin);
	scanf("%ld", &rAlumno.eTelefono);
	
	printf("\nFecha de nacimiento: ");
	fflush(stdin);
	printf("\nDia: ");
	scanf("%d", &rAlumno.rFecCumpleanios.eDia);
	printf("\nMes: ");
	scanf("%d", &rAlumno.rFecCumpleanios.eMes);
	printf("\nAnio: ");
	scanf("%d", &rAlumno.rFecCumpleanios.eAnio);	
	
	printf("\nDireccion: ");
	fflush(stdin);
	printf("\nCalle: ");
	gets(rAlumno.rDireccion.cCalle);
	printf("\nNumero exterior: ");
	scanf("%d", &rAlumno.rDireccion.eNumExt);
	printf("\nNumero interior: ");
	scanf("%d", &rAlumno.rDireccion.eNumInt);
	printf("\nColonia: ");
	fflush(stdin);
	gets(rAlumno.rDireccion.cColonia);
	printf("\nAlcadia: ");
	gets(rAlumno.rDireccion.cAlcaldia);
	printf("\nCodigo Postal: ");
	scanf("%d", &rAlumno.rDireccion.eCodigoP);		
	
	printf("\nCarrera: ");
	fflush(stdin);
	gets(rAlumno.cCarrera);
	
	printf("\nSemestre: ");
	fflush(stdin);
	scanf("%d", &rAlumno.eSemestre);
	
	rAlumno.eID = GenerarIdAlumno();
	
	FILE* fichero;
	fichero = fopen(rAlumno.cMatricula, "wt");
	fputs(rAlumno.cMatricula, fichero);
	fputs(rAlumno.cNombre, fichero);
	fputs(rAlumno.cCorreoE, fichero);
	fclose(fichero);
	
	return rAlumno;
}

//Insertar alumno
void InsertarAlumno (TaAlumnos aAlumnos, int *eTotal, TrAlumno rAlumno){

	int eRecorre;
	
	if (*eTotal == MAX_ALUMNOS - 1){
		
		printf("No se pueden agregar m%cs alumnos",160 );
		
	} else {
		
		if(*eTotal == -1 || rAlumno.eID > aAlumnos[*eTotal].eID){
			
			(*eTotal)++;
			aAlumnos[*eTotal] = rAlumno;
			printf("\n\n\t %s resgistrado correctamente.", rAlumno.cNombre);
			printf("\n\tEl id del alumno es: %d", GenerarIdAlumno() -1);
	
		} else {
			
			if (BuscarAlumnoPorId(aAlumnos, *eTotal, rAlumno.eID)!= -1){
				
				printf("\n\n\tYa existe %d", rAlumno.eID);
				
			} else {
				
				eRecorre = *eTotal;
				while (eRecorre >= 0 && aAlumnos[eRecorre].eID > rAlumno.eID){
					
					aAlumnos[eRecorre + 1] = aAlumnos[eRecorre];
					eRecorre --;
					aAlumnos[eRecorre +1 ] = rAlumno;
					(*eTotal)++;
					
					printf("\n\n\t%s registrado correctamente.", rAlumno.cNombre);
					printf("\n\tEl id del alumno es: %d", GenerarIdAlumno() -1);
					
				}
				
			}
			
		}
		
	}// Insertar Alumno
}
	
//Buscar alumno por ID
int BuscarAlumnoPorId(TaAlumnos aAlumnos, int eTotal, int eID){
	
	
	int eMenor, eMayor, eMedio;
	
	if (eTotal == -1){
		
		return -1;
		
	} else {
		
		eMenor = 0;
		eMayor = eTotal;
		eMedio = (eMayor + eMenor) / 2;
		
		while (eMenor < eMayor && aAlumnos[eMedio].eID != eID){
			
			if (eID < aAlumnos[eMedio].eID){
				
				eMayor = eMedio - 1;
				
			} else{
				
				eMenor = eMedio + 1;
			}
			
			eMedio = (eMayor + eMenor) / 2;
			
			if (eID == aAlumnos[eMedio].eID){
				
				return eMedio;
			
			} else {
				
				return - 1;
				
			}
		}
	}
}

//Generar ID de alumno
int GenerarIdAlumno(){
	
	static int eSiguiente = 1;
	
	return (eSiguiente ++);
}

//Leer ID de alumno
int LeerIdAlumno (TaCadena cOperacion, int eTotal, int eUltimoID){
	
	int eID;
	
	if (eTotal == - 1){
		
	printf ("\n\nNo hay alumnos registrados. ");
	
	fflush (stdin);
	getchar();
	return -1;
	
	} else {
		
		do{
			
			printf("\n\nIngrese el id del profesor a %s: ", cOperacion);
			
			fflush(stdin);
			scanf("%d", &eID);
		} while(eID < 1 || eID > eUltimoID);
		
		return eID;
	}
}

//Mostrar datos del alumno
void MostrarDatosAlumno(TrAlumno rAlumno){
	
	int eAlumno, eIDAlumno;
	char cOtro;
	
	printf("\n\t\tDatos del alumno: %d\n", rAlumno.eID);
	
	printf("\nMatricula del alumno: %s", rAlumno.cMatricula);
	printf("\n\nNombre: %s", rAlumno.cNombre);
	printf("\nFecha de nacimiento: %d/%d/%d", rAlumno.rFecCumpleanios.eDia, rAlumno.rFecCumpleanios.eMes, rAlumno.rFecCumpleanios.eAnio);
	printf("\nDireccion: %s", rAlumno.rDireccion);
	printf("\nCorreo electronico: %s", rAlumno.cCorreoE);
	printf("\nTelefono: %ld", rAlumno.eTelefono);
	printf("\nCarrera: %s", rAlumno.cCarrera);
	printf("\nSemestre: %d", rAlumno.eSemestre);

}

//Consulta de alumnos por ID
void ConsultarAlumnosPorId(TaAlumnos aAlumnos, int eTotal, int eID){
	
	int ePos;
	
	ePos = BuscarAlumnoPorId(aAlumnos, eTotal,eID);
	
	if(ePos > -1){
		
		MostrarDatosAlumno(aAlumnos[ePos]);
		
		printf("\n\nPresione una tecla para continuar...");
		
;	} else {
		
		printf("\n\nno se encontr%c el id %d", 162, eID);
	}
}

//Modificar alumno
void ModificarAlumno(TaAlumnos aAlumnos, int eTotal, int eID){
	
	int ePos, eDato, eAlumno;
	
	if(eTotal == -1){
		
		printf("\n\n\tNo hay libros registrados.");
		
	}	else {
		
		ePos = BuscarAlumnoPorId(aAlumnos, eTotal, eID);
		
		if(ePos == -1){
			
			printf("\n\n\tNo existe el id %d.", eID);
		
		} else {
			
			do{
				
				MostrarDatosAlumno(aAlumnos[ePos]);
				
				printf("\n\n1.Matricula"
						"\n2.Nombre"
						"\n3.Correo electronico"
						"\n4.Telefono"
						"\n5.Fecha de nacimiento"
						"\n6.Direccion"
						"\n7.Carrera"
						"\n8.Semestre"
						"\n9.Regresar");
				
				printf("Seleccione el dato a modificar: ");
				scanf("%d",&eDato);
				
				switch(eDato){
					case 1: 
						printf("Nueva matricula: ");
						fflush(stdin);
						gets(aAlumnos[ePos].cMatricula);
						break;
					
					case 2: 
						printf("Nuevo nombre: ");
						fflush(stdin);
						gets(aAlumnos[ePos].cNombre);
						break;
						
					case 3: 
						printf("Nuevo correo electronico: ");
						fflush(stdin);
						gets(aAlumnos[ePos].cCorreoE);
						break;
					
					case 4: 
						printf("Nuevo telefono: ");
						fflush(stdin);
						scanf("%d", &aAlumnos[ePos].eTelefono);
						break;
					
					case 5: 
						printf("Nueva fecha de nacimiento: ");
						fflush(stdin);
						scanf("%d", &aAlumnos[ePos].rFecCumpleanios);
						break;
						
					case 6: 
						printf("Nueva direcci%cn: ", 162);
						fflush(stdin);
						gets(aAlumnos[ePos].cNombre);
						break;
					
					case 7: 
						printf("Nueva carrera: ");
						fflush(stdin);
						gets(aAlumnos[ePos].cCarrera);
						break;
						
					case 8: 
						printf("Nuevo semestre: ");
						fflush(stdin);
						scanf("%d", &aAlumnos[ePos].eSemestre);
						break;
					
					case 9: 
						printf("Registro modificado exitosamente. ");
						break;
					
					default:
						printf("Error en la selecci%cn.", 162);
						break;
				} 
			}while (eDato != 9 );
		}
	}
}

//Borrar alumno
void BorrarAlumno(TaAlumnos aAlumnos, int *eTotal, int eID){
	int ePos, eRecorre;
	char cConfirma;
	
	if(*eTotal == -1){
		
		printf("\n\n\tNo hay alumnos registados.");
		
	} else {
		
		ePos= BuscarAlumnoPorId(aAlumnos, *eTotal, eID);
		
		if(ePos == -1){
			
			printf("\n\n\tNo existe el id %d", eID);
		} else{
			 
			MostrarDatosAlumno(aAlumnos[ePos]);
			
			printf("\n\n\t%cDesea borrar el registro?[S/N]: ", 168);
			fflush(stdin);
			cConfirma = getchar();
			
			if (cConfirma == 's' || cConfirma == 'S'){
				
				for(eRecorre = ePos; eRecorre < *eTotal; eRecorre++){
					
					aAlumnos[eRecorre] = aAlumnos[ePos + 1];
				}
				
				(*eTotal)--;
				printf("\n\n\tAlumno borrado correctamente.");
			}
		}
	}
}

//Listar alumnos
void ListarAlumnos(TaAlumnos aAlumnos, int eTotal){
	
printf("%d %s %s %d %d/%d/%d %s %d %d %s %s %d %s %d \n",
		aAlumnos[eTotal].eID,
		aAlumnos[eTotal].cMatricula, 
    	aAlumnos[eTotal].cCorreoE,
    	aAlumnos[eTotal].eTelefono, 
    	aAlumnos[eTotal].rFecCumpleanios.eDia,
		aAlumnos[eTotal].rFecCumpleanios.eMes, 
        aAlumnos[eTotal].rFecCumpleanios.eAnio, 
		aAlumnos[eTotal].rDireccion.cCalle,
		aAlumnos[eTotal].rDireccion.eNumExt,
        aAlumnos[eTotal].rDireccion.eNumInt,  
		aAlumnos[eTotal].rDireccion.cColonia,
		aAlumnos[eTotal].rDireccion.cAlcaldia,
		aAlumnos[eTotal].rDireccion.eCodigoP, 
        aAlumnos[eTotal].cCarrera,
        aAlumnos[eTotal].eSemestre);
	}

