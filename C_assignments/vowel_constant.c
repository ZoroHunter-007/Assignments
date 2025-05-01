#include<stdio.h>
void main()
{
    char ch;
    int choice;
    do{
    printf("Enter a character: ");
    scanf(" %c", &ch); 
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The character '%c' is a vowel.\n", ch);
            break;
        default:
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                printf("The character '%c' is a consonant.\n", ch);
            else
                printf("The character '%c' is not an alphabet.\n", ch);
            break;
    }
    printf("Do you want to continue...");
    scanf("%d",&choice);
}while (choice==1);


}