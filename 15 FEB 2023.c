//Write a C program to perform all the arithmetic operators

/*#include<stdio.h>
int main(){
	int a,b;
	char ch;
	printf("enter the choice");
	scanf("%c",&ch);
	printf("enter the values for a and b");
	scanf("%d\n%d",&a,&b);
	switch(ch){
		case '+':
			printf("%d + %d = %d",a,b,a+b);
			break;
		case '-':
			printf("%d - %d = %d",a,b,a-b);
			break;
		case '*':
			printf("%d * %d = %d",a,b,a*b);
			break;
		case '/':
			printf("%d / %d = %d",a,b,a/b);
			break;
			
	}
	
	return	0;
	
}






#include<stdio.h>
int main(){
	int n = 10;
	while (n>10){
		printf("%d",n);
		n=n-1;
	return 0;
	
	
		
	}
}*/

//Write a  program to print the multiplication table using while loop[].





#include<stdio.h>
int main(){
	int n,i=1;
	scanf("%d",&n);
	while(i<=12){
		printf("%d * %d = %d\n",n , i, n*i);
		i=i+1;
		
	}
	return 0;
		
}

//Write a C program to find if the given number is perfect ot not.
