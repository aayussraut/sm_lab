#include<stdio.h>
#include<conio.h>

void main(){
    int n,observed[20],i,expected;
    float calulation[20],critical;
    int total=0;
    float calculated_value=0.0;

    printf("Enter the number of process: \n");
    scanf("%d",&n);
    printf("Enter the critical value: \n");
    scanf("%f",&critical);
    printf("Enter the observed frequency: \n");
    for(i=0;i<n;i++){
        scanf("%d",&observed[i]);
    }

    for(i=0;i<n;i++){
        total+=observed[i];
    }

    expected=total/n;
    for(i=0;i<n;i++){
        int value =(observed[i]-expected)*(observed[i]-expected);
        calulation[i]=(float)value/expected;
        calculated_value+=calulation[i];
    }

    printf("\n\tS.No\t\tExpected\tObserved\tCalculation\n");
    for(i=0;i<n;i++){
        printf("\t%d\t\t%d\t\t%d\t\t%f\n",i+1,expected,observed[i],calulation[i]);
    }
    printf("\n\ttotal\t\t%d\t\t%d\t\t%f\n",expected*n,total,calculated_value);

    if(calculated_value<critical){
        printf("\n\tThe test is accepted");
    }
    else{
        printf("\n\tThe is rejected");
    }

}