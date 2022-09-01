#include<stdio.h>
main(){
	int su,kola,misir,bilet,toplam;
	printf("bilet adet:");
	scanf("%d",&bilet);
	printf("su adet:");
	scanf("%d",&su);
	printf("kola adet:");
	scanf("%d",&kola);
	printf("misir adet:");
	scanf("%d",&misir);
	toplam=misir*2+kola*2+su*1+bilet*8;
	printf("toplam ucret:%d",toplam);
	getch();
	
}
