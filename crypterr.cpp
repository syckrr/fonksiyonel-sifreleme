#include<stdio.h>
#include<iostream>
#define maxlength 999 
int main(int argc, char *argv[]){	
	
	char yenikelime[maxlength];
	char kelime[maxlength];
	char alfabe[]="xabcdefghijklmnoprstuvyz"; //24
	int toplam=0;
	int i,a;
	a=i=0;
	printf("\nBir kelime giriniz:");
	fgets(kelime,maxlength,stdin);
	printf("%d",sizeof(kelime));
		printf("\nKelime : %s",kelime);
	for(i=0;i<sizeof(kelime)-1;i++){
		for(a=0;a<sizeof(alfabe)-1;a++){
			if(kelime[i]==alfabe[a]){
				yenikelime[i]=alfabe[(5*a+4)%24];
				break;
			}
			else if(kelime[i]==' ' || kelime[i]=='w' || kelime[i]=='q'){
				yenikelime[i]=' ';//yenikelime[i]=' ';
				break;
			}
		}		
	}
	
	printf("\nYeni Kelime : %s",yenikelime);
	int tott=0;
	while(tott<maxlength){
	
	for(int cevir=0;cevir<24;cevir++){
		if(yenikelime[tott]==alfabe[cevir]){
			printf("%c",alfabe[cevir]);
			tott++;
			break;
		}
		else if(yenikelime[tott]==' ')
		{
			//printf(" ");
			tott++;
			break;
		}
		else{
		tott=9000;
		break;
		}
	}
	
		
	}
		printf("\n");
		
		
	system("PAUSE");
	return 0;
}
