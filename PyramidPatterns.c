#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

int main()
{
    int choice;
    system("cls");
    while(1)
    {
        printf("All-in-One Pyramid Pattern Program\n\n\n");
        printf("\t\t1. Left Half Pyramid Pattern\n");
        printf("\t\t2. Reverse Left Half Pyramid patern\n");
        printf("\t\t3. Right Half Pyramid Pattern\n");
        printf("\t\t4. Reverse Half Pyramid Pattern\n");
        printf("\t\t5. Full Pyramid Pattern\n");
        printf("\t\t6. Reverse Full Pyramid Pattern\n");
        printf("\t\t7. Left Half Pyramid Using Numbers Pattern\n");
        printf("\t\t8. Reverse Left Half Pyramid Using Numbers Pattern\n");
        printf("\t\t9. Diamond Pyramid Pattern\n");
        printf("\t\t0. Exit");


        printf("\n\nEnter your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int i,j,n;
                printf("\nEnter the no of rows: ");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                {
                    for(j=1;j<=i;j++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
                printf("\n\n");
                break;
            }

            case 2:
            {
                int i,j,n;
                printf("\nEnter the no of rows: ");
                scanf("%d",&n);
                for(i=n;i>=1;i--)
                {
                    for(j=i;j>=1;j--)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
                printf("\n\n");
                break;
            }

            case 3:
            {
                int i,j,k,n,m;
                printf("\nEnter the no of rows: ");
                scanf("%d",&n);
                m=n;
                for(i=1;i<=n;i++)
                {
                    for(j=1;j<m;j++)
                    {
                        printf(" ");
                    }
                    m--;
                    for(k=1;k<=i;k++)
                    {
                        printf("*");
                    }
                    printf("\n\n");
                }
                break;
            }

            case 4:
            {    
	            int i,j,n,k;
	            printf("\nEnter the no. of rows for Inv. half pyramid: ");
	            scanf("%d",&n);
		        for(i=n;i>=1;i--)
                {
		            for(j=1;j<=n-i;j++)
                    {
                        printf(" ");
		            }
		            for(k=1;k<=i;k++)
                    {
		                printf("*");
                    }
                    printf("\n");
		        }
		        printf("\n\n");
                break;
            }

            case 5:
            {    
	            int i,j,n,k;
	            printf("\nEnter the no. of rows for Inv. half pyramid: ");
	            scanf("%d",&n);
		        for(i=n;i>=1;i--)
                {
		            for(j=1;j<=n-i;j++)
                    {
                        printf(" ");
		            }
		            for(k=1;k<=i;k++)
                    {
		                printf("* ");
                    }
                    printf("\n");
		        }
		        printf("\n\n");
                break;
            }

            case 6:
            {
                int i,j,k,n,m;
                printf("\nEnter the no of rows: ");
                scanf("%d",&n);
                m = n;
                for(i=n;i>=1;i--)
                {
                    for(j=0;j<=m-i;j++)
                        {
                            printf(" ");
                        }
                    for(k=1;k<=i;k++)
                        {
                            printf("* ");
                        }
                    printf("\n");
                }
                printf("\n\n");
                break;
            }

            case 7:
            {
                int i,j,k,n;
                printf("\nEnter the no of lines: ");
                scanf("%d",&n);
                for (i=1;i<=n;i++)
                {
                    for (j=1;j<=i;j++)
                        {
                            printf("%d ",j);
                        }
                    printf("\n");
                }
                printf("\n\n");
                break;
            }

            case 8:
            {
                int i,j,n;
                printf("\nEnter the no of lines: ");
                scanf("%d",&n);
                for (i=0;i<=n;i++)
                {
                    for (j=1;j<=n-i;j++)
                    {
                        printf("%d ",j);
                    }
                    printf("\n");
                } 
                printf("\n\n");
                break;   
            }

            case 9:
            {
                int n,i,j,k,x;
                printf("\nEnter the number of rows: ");
                scanf("%d",&n);

                x=n;
                for(i=1;i<=n;i++)
                    {
                        for(j=1;j<x;j++)
                        {
                            printf(" ");
                        }
                        x--;
                        for(k=1;k<=i;k++)
                            {
                                printf("* ");
                            }
                        printf("\n");
                    }
                int a,b,c,y;
                y = n;
                for(a=n;a>1;a--)
                {
                    for(b=0;b<=y-a;b++)
                        {
                        printf(" ");
                        }
                        for(c=1;c<a;c++)
                        {
                            printf("* ");
                        }
                    printf("\n");
                }
                printf("\n\n\n");
                break;
            }

            case 0:
                printf("\n\n\t....S T R I K E R The CoDeRrr....\n\n");
                exit(0);
            
            default:
                printf("\n\tInvalid Choice..\n");

	    }
	}
    return 0;
}