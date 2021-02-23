#include <stdio.h>
#include <time.h>

void preencher(int vec[],int tam){	
		for(int i=0;i<tam;i++){
			vec[i]=i;
		}
}

int main(){
	int sec[60];int min[60];int hou[24];
	preencher(sec,60);preencher(min,60);preencher(hou,24);
	int horas, minutos, segundos;
	printf("Digite as Horas iniciais: ");
	scanf("%d",&horas);	
	printf("Digite os Minutos iniciais: ");
	scanf("%d",&minutos);
	printf("Digite os Segundos iniciais: ");
	scanf("%d",&segundos);
	system("clear");
	while(1){
      	int contador1=0,contador2=0,contador3=0;
		for(int i=0;i<24;i++){
			if(contador1==0){
				i=horas;
         			contador1=1;
			}
			for(int j=0;j<60;j++){
             			if(contador2==0){
					j=minutos;
                 			contador2=1;
		    		}
				for(int k=0;k<60;k++){
                 			if(contador3==0){
			        		k=segundos;
                    				contador3=1;
		       			}
					printf("%02d:%02d:%02d\n",hou[i],min[j],sec[k]);
					sleep(1);
					system("clear");
				}
			}
		}
	}
}
