/*for passing a value to another function using parameters and agruments
#include <stdio.h>
void sudip(int a, char name[]){
	
	
	printf("%d is %s",a,name);
	
	
	
	
	
	}
	int main(){
		
		
		int a = 1;
		char name[] = "sudip";
		
		sudip(a,name);
		
		
		return 0;
		}
*/
//******RETURN STATEMENTS******
/*#include <stdio.h>


int add(int a,int b){
	
	
	int result = a + b;
	
	
	return result;
	
	
	
	
	
	
	}

	
int main(){
	
	
	int output  = add(1 , 2);
	printf("%d",output);
	
	return 0;	}
*/
/* ***********************REVERSE OF STRING USING FUNCTION#####################
 * 
 * 
 * #include <stdio.h>
#include <string.h>
char* rev(char in[],char o[]){
	
int len = strlen(in);
	for (int i = 0; i  < len; i++){
		
o[i] = in[len - i - 1 ];		
		
		}
	
	
	
	
	
	
	return o;
	
	}






int main(){
	
char input[100];

printf("enter a string : ");	
fgets(input, 100 , stdin);
char output[100];	
	printf("the reversed string is : %s ",rev(input,output));
	
	
	
	
	
	
	
	return 0;
	
	}
	*/
/*###################TERNERY OPERATORS#########################
 * 	#include <stdio.h>
int max(int x,int y){
	
	
	
	
	return (x > y)   ? x:y; //return (condtion) ? if true than x else y
	}




int main(){
	int a,b;
	printf("enter \ntwo  no : ");
	scanf("%d%d",&a,&b);
	
	printf("%d",max(a,b));
	
	
	return 0;
	}
*/
//#########################TO DONT LET USER USE THE THE ENTER KEY #############
#include <stdio.h>
#include <string.h>
int main(){

char name[50];
printf("enter a name : ");
fgets(name, 50,stdin);
 name[strlen(name)- 1] = '\0'; //GETS RID OF NEW LINE CHARACTER AT THE END
while (strlen(name) == 0){
	
	
	
	
	printf("\nenter a name : ");
fgets(name, 50,stdin);
 name[strlen(name)- 1] = '\0';

	}

printf("Hello %s",name);
		
		
	
	
	return 0;
	}



	
	
	
	
	
	
	
	
	
	
	
	

