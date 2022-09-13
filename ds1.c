#include<stdio.h>
int main()
{
    // int a,b,c,d; //Declaration


    // a=printf("Hello world");
    // printf("\n %d",a);
    // printf("\n");
    // a=scanf("%d%d%d",&b,&c,&d);
    // printf("\n a:%d",a);
    // printf("\n b:%d",b);
    // printf("\n c:%d",c);

    // printf("\n %d",5/2);
    // printf("\n%f",5/2.0);

    // printf("\n%d",53331%10);
    // printf("\n%d",53332%10);
    // printf("\n%d",53333%10);
    // printf("\n%d",53334%10);
    // printf("\n%d",53335%10);
    
    // printf("\n%d",53331/10);
    // printf("\n%d",53332/10);
    // printf("\n%d",53333/10);
    // printf("\n%d",53334/10);
    // printf("\n%d",53335/10);

    // printf("\n%d",1<2);
    // printf("\n%d",1>2);
    // printf("\n%d",1>2>3);
    // printf("\n%d",3>2>1);
    // printf("\n%d",1<2<3);
    // printf("\n%d",3<2<1);

    // printf("\n%d",1||0||0);
    // printf("\n%d",1&&0&&0);

    // int a=100,b=20,c=50,x;
    // x=(a>b&&a>c)?a:(b>c)?b:c;
    // printf("%d",x);
    // return 0;



    int i = 1, n = 1;
    for (;;)
    {
        if (i > 10)
            break;
        else
            printf("\n%d", i++);
    }
    printf("\n2.%d", i);
    printf("\n2.%d", n);
    return 0;
}


/*#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	textcolor(2);
	for(i=1;i<=12;i++)
	{
		for(j=1;j<=30;j++)
		{
			if(i>0&&i<5)
			{
				textcolor(4);
				cprintf("*");

			}
			else if(i>=5&&i<9)
			{
				textcolor(15);
				cprintf("*");
			}
			else
			{
				textcolor(2);
				cprintf("*");
			}


		  }
			printf("\n");
		}
		for(i=1;i<13;i++)
		{
			for(j=1;j<4;j++)
		       {
				textcolor(6);
				cprintf("|");
		       }
		       printf("\n");

		}



	getch();

}*/