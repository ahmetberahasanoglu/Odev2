#include <stdio.h>
#include <stdlib.h>
  
//Bu programda, kullanıcı tarafından verilen iki sayının birbirinden çıkarılmasıyla ikisinin de sıfıra ulaşana kadar kaç işlem yapıldıgını görüyoruz.
int main(int argc, char *argv[]) {
	int num1,num2,islemSayisi;
	printf("ilk sayiyi giriniz");
	scanf("%d",&num1);
	printf("ikinci sayiyi giriniz");
	scanf("%d",&num2);// sayiları kullanıcıdan aldım
	if(num1<0||num2<0){
	printf("\nnegatif deger giremezsiniz dogal sayilari kullanin");// eger sayilar negatifse sıfıra ulaştıramayacağımızdan negatif degerler girildiğinde program durur.
	return 0;
	}
	printf("\nBaslangic sayilari:   num1= %d  num2= %d\n\n",num1,num2);
	for(islemSayisi=0;num1!=0||num2!=0;islemSayisi++){//donguyu num1 ve num2 sıfıra ulaştıgında bitirttim 
	    
		if (num1==0 || num2==0){//eger numaralardan biri 0 ise diğeri de tek islemle sıfırlanmalıdır o yüzden bu kosul kontrolünü kullandım
		num2=0;
		num1=0;
		}
		//iki numaradan hangisi büyükse çıkarma islemi büyük olandan yapılır.
		if (num1>=num2){
			num1-=num2;
		
		}
		else{
		num2-=num1;	
		
		}
	
     printf("num1= %d  num2= %d\n",num1,num2);//çıkarma islemi her yapıldıgında olusan degerleri yazdırdım
	}
	printf("islem sayisi = %d",islemSayisi);//en sonunda da ulasmak istedigimiz islem sayisi ekranda gözüktü
	
	return 0;
}
