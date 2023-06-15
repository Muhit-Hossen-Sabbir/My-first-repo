#include<stdio.h>
#include<math.h>

int main()
{
    int mch;

    printf("1. Mini calculator. \n");
    printf("2. Even or Odd finder. \n");
    printf("3. Positive or Negative indicator. \n");
    printf("4. Leap year indicator. \n");
    printf("5. Large and Small number definder. \n");
    printf("6. Ascii and Character converter. \n");
    printf("7. Ceil and Floor converter. \n");
    printf("8. Triangle area indecator! \n");
    printf("9. Upper to Lowercase converter! \n");
    printf("10. Mini calculator. \n");
    printf("11. Vowel or consonent indecator. \n");
    printf("12. Multiplication table. \n");
    printf("Select a section: ");

        scanf("%d", &mch);
        getchar();

    if(mch == 1){       // Mini Calculator!

    int a, b, result;
    char sign;
        printf("\nWelcome to Mini calculator! \n");
        printf("Enter your calculate: ");
            scanf("%d %c %d", &a, &sign, &b);

    if (sign == '+'){
        result = a+b;
        printf("Your calculation is: %d \n", result);
    }
    else if (sign == '-'){
        result = a-b;
        printf("Your calculation is: %d \n", result);
    }
    else if (sign == '*'){
        result = a*b;
        printf("Your calculation is: %d \n", result);
    }
    else if (sign == '/'){
        result = a/b;
        printf("Your calculation is: %d \n", result);
    }
    else if (sign == '^'){
        result = pow(a,b);
        printf("\nYour calculation is = %d \n", result);
    }
    else
        printf("Invaild sign!");

    return 0;
}

    else if(mch == 2){       //Even or Odd finder!
    int num;
        printf("\nWelcome to Even or Odd finder!");
        printf("\nEnter the number: ");
            scanf("%d", &num);

        if (num % 2 == 0)
        printf("\nThe number is even. \n");

        else if (num % 2 == 1)
        printf("\nThe number is odd. \n");

        else
        printf("\nInvaild number!");

    return 0;
}

    else if(mch == 3){      //Positive or Negative indicator!
    int num;
        printf("\nWelcome to Positive or Negative indicator! \n");
        printf("Enter the number: ");
            scanf("%d", &num);

    if (num > 0)
        printf("\nThe number is positive. \n");

    else if (num < 0)
        printf("\nThe number is negetive. \n");

    else if (num == 0)
        printf("\nThe number is zero");

    else
        printf("\nInvaild number!");

    return 0;
}

    else if(mch == 4){     //Leap year indicator!
    int year;
        printf("\nWelcome to Leap year indicator! \n");
        printf("Enter the year: ");
            scanf("%d", &year);

        if (year%400==0 || (year%4==0  && year%100!=00) )
            printf("\nThis is a Leap year. \n");

        else
            printf("\nThis is not a Leap year. \n");

    return 0;
}

    else if(mch == 5){       // Large and Small number definder!
    int num1,num2,num3;
        printf("\nWelcome to Large and Small number finder! \n");
        printf("Enter three numbers: ");
            scanf("%d %d %d", &num1, &num2, &num3);

    if (num1>num2 && num1>num3)
        printf("The large number is = %d \n", num1);

    else if (num2>num1 && num2>num3)
        printf("The large number is = %d \n", num2);

    else if (num3>num2 && num3>num1)
        printf("The large number is = %d \n", num3);

    else if (num1 == num2 && num2 == num3)
        printf("The numbers are equal. \n");

    else
        printf("Invaild number!");

    return 0;
}

    else if(mch == 6){       //Ascii and Character converter!
    int choice;
    int num;
    char  ch;
        printf("\nWelcome to Ascii and Character converter! \n");
        printf("1. Character to Ascii. \n2. Ascii to Character. \n");
        printf("Select a section: ");
            scanf("%d", &choice);
            getchar();

    if (choice == 1){
        printf("\nEnter your character: ");
           scanf("%c", &ch);
            getchar();
        printf("Here is your ascii key: %d \n", ch);
    }

    else if  (choice == 2){
        printf("\nEnter your number: ");
            scanf("%d", &num);
            getchar();
        printf("Here is your ascii character: %c \n", num);
    }

    else
        printf("\nInvaild selection! \n");

    return 0;
}

    else if(mch == 7){       //Ceil and Floor converter!
    int choice;
    double num;
    double result;
        printf("\nWelcome to Ceil and Floor converter! \n");
        printf("1. Number to Ceil. \n2. Number to floor. \n");
        printf("Select a section: ");
            scanf("%d", &choice);

    if (choice == 1){
        printf("\nEnter your point: ");
            scanf("%lf", &num);
            result = ceil(num);
        printf("Here is your ceil point: %.2lf \n", result);
    }

    else if (choice == 2){
        printf("\nEnter your point: ");
            scanf("%lf", &num);
             result = floor(num);
        printf("Here is your floor point: %.2lf \n", result);
    }

    else
        printf("\nInvaild selection! \n");

    return 0;
}

    else if(mch == 8){      //Triangle area indecator!
    float base, hight, area;
        printf("\nWelcome to Triangle area indecator! \n");
        printf("Enter the base = ");
            scanf("%f", &base);
        printf("Enter the hight = ");
            scanf("%f", &hight);

    area  =  (float) 1/2*base*hight;
    printf("\nThe triangle area = %.2f \n", area);

    return 0;
}

    else if(mch == 9){      //Upper to Lowercase converter!
    int choice;
    char upper, lower;
        printf("\nWelcome to Upper to Lowercase converter! \n");
        printf("1. Upper to Lower. \n2. Lower to Upper. \n");
        printf("Select a section: ");
            scanf("%d", &choice);
            getchar();

    if (choice == 1){
        printf("\nEnter any upper case letter: ");
            scanf("%c", &upper);
            lower = tolower(upper);
        printf("\nThe lower case letter is: %c \n", lower);
    }
    else if (choice == 2){
         printf("\nEnter any lower case letter: ");
            scanf("%c", &lower);
            upper = toupper(lower);
        printf("\nThe upper case letter is: %c \n", upper);
    }
    else
        printf("\nInvaild selection! \n");

        return 0;
}

    else if(mch == 10){         //Upper or Lower case indecator!
    char ch;
        printf("\nWelcome to Upper or Lower case indecator! \n");
        printf("Enter the letter: ");
            scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("The character is capital letter. \n");

    else if (ch >= 'a' && ch <= 'z')
        printf("The character is small letter. \n ");

    else
        printf("Invaild character! \n");

    return 0;
}

    else if(mch == 11){         //Vowel or consonent indecator!
    char ch;
        printf("\nWelcome to Vowel or consonent indecator! \n");
        printf("Enter the letter: ");
            scanf("%c", &ch);

    if (ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
        printf("The letter is vowel. \n");
    else
        printf("The letter is consonent. \n");

    return 0;
    }

    else if(mch == 12){         //Multiplication table!
    int nom, res;
    int i;
    printf("\nWelcome to Multiplication table!\n");
        printf("Enter the number: ");
            scanf("%d", &nom);

    for(i=1; i<=10; i++)
    {
        res = res + nom;
        printf("%d X %d = %d \n", nom, i, res);
    }
    return 0;
}

    else
        printf("\nInvaild secion!\n");

    return 0;
}
