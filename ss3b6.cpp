
#include <stdio.h>
int main(){
	int number,sum=0;
	//nhap so nguyen 4 chu so
	printf("nhap so nguyen co 4 chu so: ");
	scanf("%d",&number);
    // kiem tra so nguyen co 4 chu so
    if (number<1000||number>9999){
    	printf("so da nhap khong phai 4 chu so.\n");
    	return 1;
	}
	//tinh tong cac chu so
  
    	sum += number%10;
			sum += number%10;
    	number /=10;
    	number /=10;
			sum += number%10;
    	number /=10;
			sum += number%10;
    	number /=10;	
    	
    	
	
	//in tong cac chu so
	printf("tong cac chu so la: %d\n",sum);
    return 0;
}
