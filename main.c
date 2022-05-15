#include<stdio.h>
#include<stdlib.h>
 
int main(){
    float tm, mies, a, s1, s2, s3, s4, s5, p;
    printf("Enter marks in math : ") ;
    scanf("%f", &s1);
    printf("Enter marks in science : "); 
    scanf("%f", &s2);
    printf("Enter marks in S.St : ") ;
    scanf("%f", &s3);
    printf("Enter marks in Hindi : ") ;
    scanf("%f", &s4);
    printf("Enter marks in English : ");
    scanf("%f", &s5);
    printf("Enter maximum marks in each subject") ;
    scanf("%f", &mies);
    a= mies*5;
    tm= s1 + s2 +s3 +s4 + s5;
    p= (tm/a)*100;
    if(p<60 ){
    printf(" Keep practicing Percentage is %f", p);
    }
    else if(p>60 && p<80 ){
    printf("😊 nice 🤔 Percentage is %f", p);
    }
    else if(p>80 && p<90){
    printf("😳😋 wow 😋😳 Percentage is %f", p);
    }
    else if(p>80 && p<100){
    printf("💯🥇 super 🥇💯 Percentage is %f", p);
    }
   return 0;
}
