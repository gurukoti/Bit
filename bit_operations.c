#include<stdio.h>
#include<stdlib.h>


void odd_num_repeated_value(int *, int  );
void little_big_endian_machine(char *start, int n1);

int main(){

	
	int i,n;
	int p = 20;

	int n1 = 0x01234567;

	int *a;
	char *b;
	char *d;


	//goto xy;

	printf("enter the number of elements");
	scanf("%d",&n);


	a = (int *)malloc( sizeof(int) * n);
	b = (char *)malloc(sizeof(char)* n);
	d = (char *)malloc(sizeof(char)* p);

	printf("enter the %d int elements ", n);
	for(i=0;i<n;i++){

		scanf("%d",&a[i]);

	}

	printf("entered elements are:\n");
	for(i=0;i<n;i++){

		printf("%d",a[i]);

	}


	printf("\n");



	printf("enter the char elements from 0 to (%d - 1)th index", n);
	for(i=0;i<n;i++){

		scanf("%c", &b[i]);
		
	}


	printf("entered char elements are:\n");
	for(i=0;i<n;i++){

		printf("%c",b[i]);

	}





	printf("\n enter the string\n");
	scanf("%s",d);

	printf("\n entered string is: %s",d);


	printf("\n");
	

	
	


	



    // Big endian or little endian

	//xy: // n1 
	int n2;

	n2 = sizeof(n1);

	little_big_endian_machine((char*)&n1, n2);


	// Odd num repeated value in a array

   odd_num_repeated_value(a,n);

   goto xyz;

   printf("went tru\n");


   xyz: printf("entered\n");






	return 0;
}






void odd_num_repeated_value(int a[], int n){

	int i,k = a[0];

	for (i=1;i<n;i++){

		k = k ^ a[i];

	}

	printf("k = %d\n",k );

}

void little_big_endian_machine(char *start, int n2){

	int i;
	for(i=0;i<n2;i++){
	
		printf("%x\t",start[i]);

	}

}


