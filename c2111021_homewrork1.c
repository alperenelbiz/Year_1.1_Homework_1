#include <time.h>
#include <stdlib.h>
#include<stdio.h>

int main()
{
    int num, bin, rem, dec=0, x=1, i, cho, a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0;
    srand(time(NULL));

    do
    {
        printf("Enter number of letters for message: ");
        scanf("%d",&num);

        for (i = 1; i <= num; i++)
        {
            printf("\nEnter a 3 digit binary: ");
            scanf("%d",&bin);

            while ( bin> 0)  
            {  
                rem = bin % 10;
                dec = dec + rem * x;  
                bin = bin / 10;
                x = x * 2;
            }

            switch (dec)
            {
            case 0:
                printf("\n%d. encrypted letter is A and random number is %d",i,rand()%8);
                a++;
                break;
                
            case 1:
                printf("\n%d. encrypted letter is B and random number is %d",i,rand()%8);
                b++;
                break;

            case 2:
                printf("\n%d. encrypted letter is C and random number is %d",i,rand()%8);
                c++;
                break;

            case 3:
                printf("\n%d. encrypted letter is D and random number is %d",i,rand()%8);
                d++;
                break;

            case 4:
                printf("\n%d. encrypted letter is E and random number is %d",i,rand()%8);
                e++;
                break;

            case 5:
                printf("\n%d. encrypted letter is F and random number is %d",i,rand()%8);
                f++;
                break;

            case 6:
                printf("\n%d. encrypted letter is G and random number is %d",i,rand()%8);
                g++;
                break;

            case 7:
                printf("\n%d. encrypted letter is H and random number is %d",i,rand()%8);
                h++;
                break;

            }

            dec = 0;
            x = 1;
        }

        printf("\nMessage has just taken...");
        printf("\nEnter 1 to continue and 0 to exit: ");
        scanf("%d",&cho);

    } while (cho == 1);
    
    printf("Number of letters after coding -> A:%d B:%d C:%d D:%d E:%d F:%d G:%d H:%d",a,b,c,d,e,f,g,h);

    return 0;
}