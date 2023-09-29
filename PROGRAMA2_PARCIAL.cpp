#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

main(){
	printf("||||||||| JUEGO DEL AGUA |||||||||\n\n");
	
	int n[3][2]={0,0,0,0,0,0};
	int a,b,c,d;
	int x,y;
	int vidas=3;
	int aciertos=0;
	int player;
	
	play:
	cout<<"SELECCIONE LA OPCION SIMPLE O MULTIJUGADOR"<<endl;
	cout<<"1 - (1 JUGADOR)"<<endl;
	cout<<"2- (2 JUGADORES)"<<endl;
	cin>>player;
	
	inicio:
	if(player==1){
		system("cls");
		cout<<"USTED HA SELECCIONADO LA OPCION PARA 1 JUGADOR"<<endl<<endl;
		cout<<"__________INSTRUCCIONES:__________"<<endl;
		cout<<"DEBERA ADIVINAR A TRAVEZ DE LAS COORDENADAS X E Y DONDE SE ENCUENTRAN"<<endl;
		cout<<"LOS 2 OBJETOS OCULTOS DENTRO DEL SIGUIENTE CUADRO:"<<endl<<endl;
		cout<<" ____Y____"<<endl;
		cout<<"| :?:   :?:"<<endl;
		cout<<"X :?:   :?:"<<endl;
		cout<<"| :?:   :?:"<<endl<<endl;
		
		cout<<"LOS VALORES DE X PODRAN SER 0,1 o 2 PARA REFERIRSE A LAS LINEAS"<<endl;
		cout<<"MIENTRAS QUE LOS DE Y PODRAN SER 0 o 1 PARA REFERIRSE A LAS COLUMNAS COMO SE VE A CONTINUACION:"<<endl<<endl;
		
		cout<<"   Y=0   Y=1"<<endl;
		cout<<"X=0 :?:   :?:"<<endl;
		cout<<"X=1 :?:   :?:"<<endl;
		cout<<"X=2 :?:   :?:"<<endl<<endl;
		
		cout<<"SOLO TIENE 3 VIDAS PARA INTENTAR ENCONTRAR LOS OBJETOS"<<endl<<endl;
		
		
		int n[3][2]={0,0,0,0,7,7};
		ok:
		if(aciertos==2){
		cout<<"FELICITACIONES!! ENCONTRASTE LOS 2 OBJETOS OCULTOS!"<<endl;
		goto end;
	}else if (aciertos==1){
	  cout<<"SOLO DEBES ACERTAR UNO MAS PARA GANAR"<<endl<<endl;
	  
	}
	
	if(vidas>0){
	cout<<"A CONTINUACION INGRESE LA COORDENADA X"<<endl;
	cin>>x;
	cout<<"AHORA INGRESE LA COORDENADA Y"<<endl<<endl;
	cin>>y;
	}else{
		cout<<"SE LE HAN TERMINADO LAS CHANCES"<<endl<<endl;
		cout<<"POSICION DE LOS OBJETOS:"<<endl<<endl;
		cout<<"OBJETO 1: X = 2, Y = 0"<<endl;
		cout<<"OBJETO 2: X = 2, Y = 1"<<endl<<endl;
		goto end;
	}
	
	if(vidas>0 && x<=2 && y<=1 && x>=0 && y>=0 && n[x][y]==7){
		aciertos=aciertos+1;
		n[x][y]=0;
		cout<<"::::::::::::::HA ACERTADO!!!!::::::::::::::"<<endl<<endl;
		goto ok;
	}else if(vidas>0 && x<=2 && y<=1 && x>=0 && y>=0 && n[x][y]==0){
		vidas=vidas-1;
		cout<<"------------------AGUA------------------"<<endl<<endl;
		cout<<"::::::::::::::TE QUEDAN "<<vidas<<" VIDAS!!!!!::::::::::::::"<<endl<<endl;
		goto ok;
	}else{
		cout<<"INGRESO INVALIDO"<<endl;
		cout<<"POR FAVOR INGRESE LOS VALORES DE X E Y SEGUN SE INDICAN EN LAS INSTRUCCIONES"<<endl; 
	}
	
	
	
	
	
	}else if(player==2){
		system("cls");
		cout<<"USTED HA SELECCIONADO LA OPCION PARA 2 JUGADORES"<<endl<<endl;
		cout<<"__________INSTRUCCIONES:__________"<<endl;
		cout<<"EL JUGADOR 1 DEBERA INDICAR A TRAVEZ DE LAS COORDENADAS X E Y DONDE SE OCULTARAN"<<endl;
		cout<<"2 OBJETOS EN EL SIGUIENTE CUADRO Y LUEGO EL JUGADOR 2 DEBERA ENCONTRARLOS:"<<endl<<endl;
		cout<<" ____Y____"<<endl;
		cout<<"| :?:   :?:"<<endl;
		cout<<"X :?:   :?:"<<endl;
		cout<<"| :?:   :?:"<<endl<<endl;
		
		cout<<"LOS VALORES DE X PODRAN SER 0,1 o 2 PARA REFERIRSE A LAS LINEAS"<<endl;
		cout<<"MIENTRAS QUE LOS DE Y PODRAN SER 0 o 1 PARA REFERIRSE A LAS COLUMNAS COMO SE VE A CONTINUACION:"<<endl<<endl;
		
		cout<<"   Y=0   Y=1"<<endl;
		cout<<"X=0 :?:   :?:"<<endl;
		cout<<"X=1 :?:   :?:"<<endl;
		cout<<"X=2 :?:   :?:"<<endl<<endl;
		
		intro:
		cout<<":::::::::::::::::::JUGADOR 1:::::::::::::::::::"<<endl<<endl;
		cout<<"INDIQUE LA COORDENADA X DEL PRIMER OBJETO"<<endl;
		cin>>a;
		if(a!=0 && a!=1 && a!=2){
			cout<<"VALOR INCORRECTO, DEBE INGRESAR 0, 1 o 2 PARA LA COORDENADA X"<<endl<<endl;
			goto intro;
		}
		cout<<"AHORA INDIQUE LA COORDENADA Y DEL PRIMER OBJETO"<<endl<<endl;
		cin>>b;
		if(b!=0 && b!=1){
		cout<<"VALOR INCORRECTO, DEBE INGRESAR 0 o 1 PARA LA COORDENADA Y"<<endl<<endl;
			goto intro;	
		}
		n[a][b]=7;
		cout<<"INDIQUE LA COORDENADA X DEL SEGUNDO OBJETO"<<endl;
		cin>>c;
		if(c!=0 && c!=1 && c!=2){
			cout<<"VALOR INCORRECTO, DEBE INGRESAR 0, 1 o 2 PARA LA COORDENADA X"<<endl<<endl;
			goto intro;
		}
		cout<<"AHORA INDIQUE LA COORDENADA Y DEL SEGUNDO OBJETO"<<endl<<endl;
		cin>>d;
		if(d!=0 && d!=1){
		cout<<"VALOR INCORRECTO, DEBE INGRESAR 0 o 1 PARA LA COORDENADA Y"<<endl<<endl;
			goto intro;	
		}
		n[c][d]=7;
	
	inicio2:
	system("cls");
		cout<<":::::::::::::::::::JUGADOR 2:::::::::::::::::::"<<endl<<endl;
		cout<<"DEBERA ADIVINAR A TRAVEZ DE LAS COORDENADAS X E Y DONDE SE ENCUENTRAN"<<endl;
		cout<<"LOS 2 OBJETOS OCULTOS DENTRO DEL SIGUIENTE CUADRO:"<<endl<<endl;
		cout<<" ____Y____"<<endl;
		cout<<"| :?:   :?:"<<endl;
		cout<<"X :?:   :?:"<<endl;
		cout<<"| :?:   :?:"<<endl<<endl;
		
		cout<<"LOS VALORES DE X PODRAN SER 0,1 o 2 PARA REFERIRSE A LAS LINEAS"<<endl;
		cout<<"MIENTRAS QUE LOS DE Y PODRAN SER 0 o 1 PARA REFERIRSE A LAS COLUMNAS COMO SE VE A CONTINUACION:"<<endl<<endl;
		
		cout<<"   Y=0   Y=1"<<endl;
		cout<<"X=0 :?:   :?:"<<endl;
		cout<<"X=1 :?:   :?:"<<endl;
		cout<<"X=2 :?:   :?:"<<endl<<endl;
		
		cout<<"SOLO TIENE 3 VIDAS PARA INTENTAR ENCONTRAR LOS OBJETOS"<<endl<<endl;
		
		ok2:
		if(aciertos==2){
		cout<<"FELICITACIONES!! ENCONTRASTE LOS 2 OBJETOS OCULTOS!"<<endl<<endl;
		cout<<"::::::::::::::::GANADOR: JUGADOR 2::::::::::::::::"<<endl;
		goto end;
	}else if (aciertos==1){
	  cout<<"SOLO TE FALTA ACERTAR UNO MAS"<<endl;
	}
	
	if(vidas>0){
	cout<<"A CONTINUACION INGRESE LA COORDENADA X"<<endl;
	cin>>x;
	cout<<"AHORA INGRESE LA COORDENADA Y"<<endl<<endl;
	cin>>y;
	}else{
		cout<<"SE LE HAN TERMINADO LAS CHANCES"<<endl<<endl;
		cout<<"::::::::::::::::GANADOR: JUGADOR 1::::::::::::::::"<<endl<<endl;
		cout<<"POSICION DE LOS OBJETOS:"<<endl<<endl;
		cout<<"OBJETO 1: X = "<<a<<" , Y = "<<b<<endl;
		cout<<"OBJETO 2: X = "<<c<<" , Y = "<<d<<endl<<endl;
		
		goto end;
	}
	
	if(vidas>0 && x<=2 && y<=1 && x>=0 && y>=0 && n[x][y]==7){
		aciertos=aciertos+1;
		n[x][y]=0;
		cout<<"::::::::::::::HA ACERTADO!!!!::::::::::::::"<<endl<<endl;
		goto ok2;
	}else if(vidas>0 && x<=2 && y<=1 && x>=0 && y>=0 && n[x][y]==0){
		vidas=vidas-1;
		cout<<"------------------AGUA------------------"<<endl<<endl;
		cout<<"::::::::::::::TE QUEDAN "<<vidas<<" VIDAS!!!!!::::::::::::::"<<endl<<endl;
		goto ok2;
	}else{
		cout<<"INGRESO INVALIDO"<<endl;
		cout<<"POR FAVOR INGRESE LOS VALORES DE X E Y SEGUN SE INDICAN EN LAS INSTRUCCIONES"<<endl; 
	}
	}else{
		system("cls");
		cout<<"INGRESO UN VALOR INCORRECTO. POR FAVOR INGRESE 1 PARA UN JUGADOR O 2 PARA 2 JUGADORES"<<endl<<endl;
		goto play;
	}
	
	
  end:	
	system("PAUSE");
return 0;	
	}
	
