#include<stdio.h>
#include<math.h>
#define MAX_SIZE 10


int A1(int x1) /// sum function
{
    int sum=0;
    int y1;
    for(int i=1 ; i<=x1 ; i++)
    {
        printf("Number %d : ",i);
        scanf("%d",&y1);
        sum +=y1;
    }
    return sum;
}



int A2(int x2) /// subtract function
{
    int result2=0;
    int y2;
    for( int i=1 ; i<=x2; i++)
    {
        printf("Number %d : ",i);
        scanf("%d",&y2);
        result2 += y2;
    }
    return result2;
}



int A3(int x3) /// product function
{
    int result3=1;
    int y3;
    for( int i=1 ; i<=x3; i++)
    {
        printf("Number %d : ",i);
        scanf("%d",&y3);
        result3 *=y3;
    }
    return result3;
}



void A4() /// divide function
{
    float n1, n2;
    printf("Enter the numerator: ");
    scanf("%f", &n1);
    printf("\nEnter the denominator: ");
    scanf("%f", &n2);
    printf("Result = %.3f ", n1/n2);

}



int A5(int x5) /// factorial function
{
    int fact=1;
    for ( int i=1; i<=x5; i++)
    {
        fact *=i;
    }
    return fact;
}



void SIN()    ///sine function
{

    double n;
    double R;
    printf("Enter the Degree : ");
    scanf("%lf",&n);
    R=sin(n*M_PI/180);
    printf("\t");
    printf("sin(%.1lf) = %.2lf",n,R);

}



void COS() /// cos function
{

    double n;
    double R;
    printf("Enter the Degree : ");
    scanf("%lf",&n);
    R=cos(n*M_PI/180);
    printf("\t");
    printf(" cos(%.1lf) = %.2lf",n,R);

}



void TAN() /// tan function
{

    double n;
    double R;
    printf("Enter the Degree : ");
    scanf("%lf",&n);
    int D=n/90;
    R=tan(n*M_PI/180);
    printf("\t");
    if(D%2 !=0)
    {
        printf("Undefined\n");
    }
    else
    {
        printf(" tan(%.1lf) = %.2lf",n,R);
    }

}



void COSINE() /// cosine function
{
    double n;
    double R;
    printf("Enter the Degree : ");
    scanf("%lf",&n);
    R=1/(sin(n*M_PI/180));
    printf("\t");
    printf(" cosine(%.1lf) = %.2lf",n,R);
}



void SEC() /// sec function
{

    double n;
    double R;
    printf("Enter the Degree : ");
    scanf("%lf",&n);
    R=1/(cos(n*M_PI/180));
    printf("\t");
    printf(" sec(%.1lf) = %.2lf",n,R);
}



void COT() /// cot function
{
    double n;
    double R;
    printf("Enter the Degree : ");
    scanf("%lf",&n);
    int D= n/90;
    R=1/(tan(n*M_PI/180));
    printf("\t");
    if(D%2==0)
    {
        printf("UNdefined\n");
    }
    else
        printf("cot(%.1lf) = %.2lf",n,R);
}



float A7(int arr[], int n) /// Number Average function
{

    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (float)sum / n;
}



void A8(int arr[], int n) /// Fibonacci number function
{
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}



void MAX_number_A9() /// Max number function
{
    int n,y;
    int max=0;
    printf("How many number take input\n");
    scanf("%d",&n);
    for ( int i =0 ; i<n ; i++)
    {
        printf(" Number %d :",i+1);
        scanf("%d",&y);
        max=y;
        if (max<y)
        {
            max=y;
        }
    }
    printf("MAX NUMBER = %d",max);
}



void MIN_number_A10() /// min number function
{
    int n,y;
    int min=0;
    printf("How many number take input\n");
    scanf("%d",&n);
    for ( int i =0 ; i<n ; i++)
    {
        printf(" Number %d :",i+1);
        scanf("%d",&y);
        min=y;
        if (min>y)
        {
            min=y;
        }
    }
    printf("MIN NUMBER = %d",min);

}




void POW_A11() /// power function
{
    int n1,n2;
    printf("\nEnter the base ->");
    scanf("%d",&n1);
    printf("\nEnter the Power ->");
    scanf("%d",&n2);
    long long  K= pow(n1,n2);
    printf("RESULT = %lld",K);

}



void Root_A12() /// Root function
{
    int n;
    printf("Enter the value -> ");
    scanf("%d",&n);
    if (0<=n)
    {
        double K= sqrt(n);
        printf("ROOT(%d) = %.3lf",n,K);

    }
    else printf("COMPLEX NUMBER\n");
}



void LOG_A13() /// e base log function
{
    float n;
    printf("Enter the value->");
    scanf("%f",&n);
    float result= log(n);
    printf("Log(%f)= %f\n",n,result);


}



void LOG_A14()/// random base function
{
    float n, base;
    printf("Enter the value->");
    scanf("%f", &n);
    printf("Enter the Base->");
    scanf("%f", &base);
    float result = log(n) / log(base);
    printf("Log(%f) = %f\n", n, result);
}



int Decimal_A15(int x) /// Binary to decimal conversion function
{
    int decimal = 0;
    int base = 1;

    while (x != 0)
    {
        int rem = x % 10;
        decimal += rem * base;
        x = x / 10;
        base = base * 2;
    }
    return  decimal;

}





int main ()
{
    int N;

    printf("1.SUMMATION");
    printf("\t\t 2.SUBTRACTION");
    printf("\t\t 3.MULTIPLICATION");
    printf("\t\t 4.DIVISION\n");
    printf("5.FACTORIAL");
    printf("\t\t 6.TRIGONOMETRIC FUNCTIONAL");
    printf("\t\t 7.AVERAGE ");
    printf("\t 8.FIBONACCI SERIES");
    printf("\n9. DIFINE MAX NUMBER");
    printf("\t 10. DIFINE MIN NUMBER");
    printf("\t 11. POWER ");
    printf("\t 12. ROOT ");
    printf("\t 13. LN ");
    printf("\n14. RANDOM BASE LOG ");
    printf("\t 15.NUMBER CONVERSION");
    printf("\t\t16.Temperature Convertion\n");
    printf("\n\t\t################################################################################");
    printf("\n\nWhat do you want -> ");
    scanf("%d",&N);



    if(N==1)
    {
        int x1;
        printf("How many number added you -> \n");
        scanf("%d",&x1);
        int result1=A1(x1);
        printf("%d",result1);
    }

    if(N==2)
    {
        int x2;
        printf("How many number subtraction -> ");
        scanf("%d",&x2);
        int result2= A2(x2);
        printf("%d",result2);
    }


    if(N==3)
    {
        int x3;
        printf("How many number multiplication -> ");
        scanf("%d",&x3);
        int result3= A3(x3);
        printf("%d",result3);
    }


    if(N==4)
    {
        A4();
    }


    if(N==5)
    {
        int x5;
        printf("Enter the value : ");
        scanf("%d",&x5);
        int result5= A5(x5);
        printf("%d",result5);
    }


    if(N==6)
    {
        printf("\n");
        printf("1.sin\n");
        printf("2.cos\n");
        printf("3.tan\n");
        printf("4.cosine\n");
        printf("5.sec\n");
        printf("6.cot\n");

        printf("\nEnter your choice -> \n");
        int x6;
        scanf("%d",&x6);

        if(x6==1)
        {
            SIN();

        }
        else if(x6==2)
        {
            COS();
        }
        else if(x6==3)
        {
            TAN();

        }
        else  if(x6==4)
        {
            COSINE();

        }
        else  if(x6==5)
        {
            SEC();
        }
        else  if(x6==6)
        {
            COT();
        }

    }


    if(N==7)
    {
        printf("How many number take input -> ");
        int n;
        scanf("%d", &n);

        int arr[n];
        for(int i = 0; i < n; i++)
        {
            printf("Number %d :",i+1);
            scanf("%d", &arr[i]);
        }
        float average = A7(arr, n);
        printf(" Average =%.2f\n", average);

    }


    if(N==8)
    {
        int arr[200], n;
        printf("Enter the number of terms: ");
        scanf("%d", &n);
        A8(arr, n);
        printf("\nFibonacci Sequence up to %d terms:\n", n);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }


    if(N==9)
    {
        MAX_number_A9()  ;


    }
    if (N==10)
    {

        MIN_number_A10();
    }


    if(N==11)
    {
        POW_A11();
    }

    if (N==12)
    {
        Root_A12();
    }

    if (N==13)
    {
        LOG_A13();
    }
    if (N==14)
    {
        LOG_A14();
    }



    if(N==15)
    {
        int x15;
        printf("1.Decimal to Octal\n");
        printf("2.Decimal to Hexadecimal\n");
        printf("3.Decimal to binary\n\n");

        printf("4.Binary to Decimal\n");
        printf("5.Binary to Octal\n");
        printf("6.Binary to Hexadecimal\n");
        printf("\n\nEnter your choice :\n\n");


        scanf("%d",&x15);

        if(x15==1)
        {
            /**  int y;
              printf("Enter the Decimal Number : ");
              scanf("%d",&y);
              printf("Octal Number : %o",y); **/


            int y;
            printf("Enter the Decimal Number : ");
            scanf("%d",&y);
            int i=0;
            int j, B[i];
            while(y>0)
            {
                B[i]=y%8;
                y=y/8;
                i++;
            }
            printf("octal number: ");
            for(int j=i-1; j>=0; j--)
            {
                printf("%d",B[j]);
            }

        }


        else if( x15==2)
        {
            /** int y;
             printf("\nEnter the Decimal Number : ");
             scanf("%d",&y);
             printf("Hexadecimal Number : %x",y);**/

            int y;
            printf("Enter the Decimal Number : ");
            scanf("%d",&y);
            int i=0;
            int j, B[i];
            while(y>0)
            {
                B[i]=y%16;
                y=y/16;
                i++;
            }
            printf("Hexadecimal number: ");
            for(int j=i-1; j>=0; j--)
            {
                printf("%d",B[j]);
            }

        }




        else if (x15==3)
        {
            int y;
            printf("Enter the Decimal Number : ");
            scanf("%d",&y);
            int i=0;
            int j, B[i];
            while(y>0)
            {
                B[i]=y%2;
                y=y/2;
                i++;
            }
            printf("Binary number: ");
            for(int j=i-1; j>=0; j--)
            {
                printf("%d",B[j]);
            }

        }





        else if(x15==4)
        {
            int x;
            printf("Enter the Binary number: ");
            scanf("%d", &x);
            int deci=Decimal_A15(x);
            printf("Decimal equivalent: %d\n", deci);


        }
        else if(x15==5)
        {
            int x;
            printf("Enter the Binary number :");
            scanf("%d",&x);
            int y =Decimal_A15(x);

            int i=0;
            int j, B[i];
            while(y>0)
            {
                B[i]=y%8;
                y=y/8;
                i++;
            }
            printf("octal number: ");
            for(int j=i-1; j>=0; j--)
            {
                printf("%d",B[j]);
            }

        }


        else if(x15==6)
        {
            int x;
            printf("Enter the Binary number :");
            scanf("%d",&x);
            int y =Decimal_A15(x);

            int i=0;
            int j, B[i];
            while(y>0)
            {
                B[i]=y%16;
                y=y/16;
                i++;
            }
            printf("Hexdecimal number: ");
            for(int j=i-1; j>=0; j--)
            {
                printf("%d",B[j]);
            }

        }
    }


     if (N==16)
    {
        double temperature;
        int choice;

        printf("Temperature Conversion:\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &temperature);
            printf("Temperature in Fahrenheit: %.2lf\n", (temperature * 9 / 5) + 32);
            break;


        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf", &temperature);
            printf("Temperature in Celsius: %.2lf\n", (temperature - 32) * 5 / 9);
            break;
        default:
            printf("Invalid choice!\n");
        }

    }











    return 0;
}
