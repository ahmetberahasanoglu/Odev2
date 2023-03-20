#include <stdio.h>
#include <stdlib.h>
  

int main(int argc, char *argv[]) {
	int num1,num2,islemSayisi;
	printf("ilk sayiyi giriniz");
	scanf("%d",&num1);
	printf("ikinci sayiyi giriniz");
	scanf("%d",&num2);
	if(num1<0||num2<0){
	printf("\nnegatif deger giremezsiniz dogal sayilari kullanin");
	return 0;
	}
	printf("\nBaslangic sayilari:   num1= %d  num2= %d\n\n",num1,num2);
	for(islemSayisi=0;num1!=0||num2!=0;islemSayisi++){
	    
		if (num1==0 || num2==0){
		num2=0;
		num1=0;
		}
		if (num1>=num2){
			num1-=num2;
		
		}
		else{
		num2-=num1;	
		
		}
	
     printf("num1= %d  num2= %d\n",num1,num2);
	}
	printf("islem sayisi = %d",islemSayisi);
	
	return 0;
}
