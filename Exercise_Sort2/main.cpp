//
//  main.cpp
//  Exercise_Sort2
//
//  Created by ChengJY on 14-2-27.
//  Copyright (c) 2014年 ChengJY. All rights reserved.
//

#include <iostream>
#include "math.h"

//杨辉三角
void cjy_triangle()
{
    int i,j,a[10][10];
    
    for(i=0;i<10;i++)
    {
        a[i][0]=1;
    }
    for(i=1;i<10;i++)
    {
        a[i][i]=1;
    }
    for(i=2;i<10;i++)
    {
        for(j=1;j<i;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    
    for(i=0;i<10;i++)
        
        {
            for(j=0;j<=i;j++)
            
            printf("%4d",a[i][j]);
            
            printf("\n");
            
        }

}

//字符数组逆序
void char_upsidedown()
{
    char c,str[80];
    
    int i,j;
    
    printf("Enter a string:\n");
    
    scanf("%s",str); /* 也可以gets(str);puts(str); */
    
    for(i=0,j=(int)strlen(str)-1;i<j;i++,j--)
        
    {
        c=str[i];
        
        str[i]=str[j];
        
        str[j]=c;
        
    }
    
    printf("\nReversed string:\n%s\n",str);
}


//水仙花数
void cjy_flower()
{
    int i,j,k,n;
    
    printf("水仙花数是：");
    
    for(n=100;n<1000;n++)
        
    {
        i=n/100;
        
        j=n/10-i*10;
        
        k=n%10;
        
        if(n==i*i*i+j*j*j+k*k*k)
        {
            printf("%4d",n);
        }
    }
    
    printf("\n");
}
//水仙花
void cjy_flower2()
{
    int i,j,k,n;
    
    printf("水仙花数是：");

    for (i = 1; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            for (k = 0; k < 10; k++) {
                if ((i*i*i+j*j*j+k*k*k) == (n = i * 100 + j * 10 + k)) {
                    printf("%4d",n);
                }
            }
        }
    }
    printf("\n");
}

//素数
void cjy_sushu()
{
    int staNum=100,endNum=200,sum=0;
    int i,j,end;
    for(i=staNum;i<=endNum;i++)
    {
        end = sqrt(i);//判断因子，如果1~平方根内无，则确定无
        for(j=2;j<=end;j++)
            if(i%j==0)
                break;
        if(j==end+1)
            sum+=i;
    }
    printf("the sum is %d .\n",sum);
}

//n的阶乘

float fac(int n)
{
    float f;
    
    if(n<0)
    {
        printf("n<0,data error!");
        return -1;
    }
    else if(n==0||n==1)
        f=1;
    else
        f=fac(n-1)*n;
    
    return f;
}
void cjy_fac()
{
    int n;
    float f;
    
    printf("Input a integer number:\n");
    scanf("%d",&n);
    
    f=fac(n-1)*n;
    
    printf("%d! =%f\n",n,f);

    
}

//求1!+2!+……n！
void cjy_sumfac()
{
    int n, i;
    float y=0;
    
    printf("Input a integer number:\n");
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
        
        y=y+fac(i);
    
    printf("%d! =%f\n",n,y);
}

//斐波纳挈
void cjy_fibonachi()
{
    int i;
    
    int f[20]={1,1};
    
    for(i=2;i<20;i++)
        
        f[i]=f[i-2]+f[i-1];
    
    for(i=0;i<20;i++)
        
    {
        printf("%5d",f[i]);
        
    }
    printf("\n");
}

/*一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程
 　　　找出1000以内的所有完数。*/
void cjy_perfictnum()
{
    static int k[10];
    int i,j,n,s;
    for(j=2;j<1000;j++)
    {
        n=-1;
        s=j;
        for(i=1;i<j;i++)
        {
            if((j%i)==0)
            {  n++;
                s=s-i;
                k[n]=i;
            }
        }
        if(s==0)
        {
            printf("%d is a wanshu:  ",j);
            for(i=0;i<n;i++)
            {
                printf("%d,",k[i]);
            }
            printf("%d\n",k[n]);
        }
    }
}


int main(int argc, const char * argv[])
{
//    cjy_triangle();
//    char_upsidedown();
//    cjy_flower();//153 370 371 407
//    cjy_flower2();//153 370 371 407
//    cjy_sushu();
//    cjy_fac();
//    cjy_sumfac();
//    cjy_fibonachi();
    cjy_perfictnum();
    return 0;
}
