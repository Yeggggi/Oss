 #include <stdio.h>
 #include <stdlib.h>
 #include "21600151.h"
 #define MAX_SIZE 2048


int reverse_digits(int n){
	int number[MAX_SIZE];
	int result=0;
	int count;

	for(int i=0;i<MAX_SIZE;i++){
		number[i]= n % 10;
		if(n==0 && n/10==0)
			break;

	n/=10;
	count =i;
	}

	for(int i=0;i<count+1;i++){
		result*=10;
		result+=number[i];
	}

	return result;
}
