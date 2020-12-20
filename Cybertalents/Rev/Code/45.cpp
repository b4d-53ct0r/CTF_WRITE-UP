#include <stdio.h>



int flag_checker(int secret_number){

	secret_number = 133337 ^ secret_number;
	secret_number = secret_number >> 3;

	secret_number = secret_number + 1337;	

	secret_number = secret_number - 137;

	int tmp1 = secret_number;

	secret_number = secret_number + secret_number;

	secret_number = secret_number + tmp1;

	return secret_number;

}

int main(){







	int secret_number;

	printf("Enter the secret number:");

	scanf("%d",&secret_number);

	secret_number = flag_checker(secret_number);

	if(secret_number == 1128648){

	puts("Correct number :D");

	}else{

	puts("Wrong number :p");

	}

	return 0;

	



}


