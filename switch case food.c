#include<stdio.h>

int main()
{
	int n;
	printf("press 1 to sandwich\n");
	printf("press 2 to pizza world\n");
	printf("press 3 to burgar farm honse\n");
	printf("enter the food\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1 :
			    printf("sandwich\n");
			     {
			     	printf("*veg sandwich\n");
			     	printf("*veg griil sandwich\n"); 
					break;		    
				 }
		case 2 :
			    printf("pizza world\n");
			     {
			     	printf("*4 tooing pizza\n");
			     	printf("*garden pizza\n");
					break; 		    
				 }
		case 3 :
			    printf("burgar farm honse\n");
			     {
			     	printf("*cheese burgar\n");
			     	printf("*paneer burgar\n");
					break; 		    
				 } 
				default :
				        printf( "plz enter tne food"); 		 		 
	}
	
	
}
