#include<stdio.h>
#include<conio.h>
int main()
{
    int m;
    clrscr();
    printf("Enter your marks:");
    scanf("%d", &m);
    if(m<0 || m < 100){
    printf("Invalid");
    }
    else if(m>=70 && m<=100);
    printf("Distribution");
    else{
        if(m>=60)
        printf("First Class");
        else if(m >= 50)
        printf("Second Class");
        else if(m>= 40)
        printf("Pass class");
        else if(m>=0)
        printf("Fail");
    }
    getch();
}