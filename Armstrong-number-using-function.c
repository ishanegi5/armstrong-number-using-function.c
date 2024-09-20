#include<stdio.h>
#include<math.h>
int armstrong(int num){
    int numForDigits,copiedNum,digits=0,n,finalNumber=0;
    numForDigits=copiedNum=num;
    while(numForDigits!=0)
    { digits++;
         numForDigits/=10;
    }
    while(copiedNum!=0)
    { n=copiedNum%10;
      finalNumber=finalNumber+pow(n,digits);
      copiedNum/=10;
    }
    if(finalNumber==num){
        printf("armstrong number\n");
    }
   
    else{
        printf("not armstrong number\n");
    }
    return 0;
}



int main()
{ float num;
  printf("Enter num: ");
  scanf("%f",&num);
  armstrong((int)num);
}

