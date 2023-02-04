#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	
	float sayi1,sayi2;
	int islem;
	
	printf("1.Sayiyi Giriniz: ");
	scanf("%f",&sayi1);
	printf("2.Sayiyi Giriniz: ");
	scanf("%f",&sayi2);
	
	printf("1. Islem: Toplama\n");
	printf("2. Islem: Cikarma\n");
	printf("3. Islem: Bolme\n");
	printf("4. Islem: Carpma\n\n");
	
	
	printf("Islemi Seciniz: \n");
	scanf("%d",&islem);
	
	
	switch(islem){
		case 1:
			printf("Toplama Islemi Sonucu: %2.f",sayi1 + sayi2);
			break;
		case 2:
			printf("Cikarma Islemi Sonucu: %2.f",sayi1 - sayi2);
			break;
		case 3:
			printf("Bolme Islemi Sonucu: %2.f",sayi1 / sayi2);
			break;
		case 4:
			printf("Carpma Islemi Sonucu: %2.f",sayi1 * sayi2);
			break;
		default:
			printf("Lufen Gecerli Bir Sayi Giriniz..");
	}
  
  	return 0;
}
