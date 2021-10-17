#include <stdio.h>

int main()
{
    #include <stdio.h>

int main()
{
    //ARITHMATIC OPERATOR
    int a=18,b=19,add,sub,multi,divi,mod;
    add=a+b;
    sub=a-b;
    multi=a*b;
    divi=a/b;
    mod=a%b;
    printf("The addition of a and b is %d\n",add);
    printf("The subraction of a and b is %d\n",sub);
    printf("The multiplication of a and b is %d\n",multi);
    printf("The division of a and b is %d\n",divi);
    printf("The modulus of a and b is  %d\n",mod);
    //ASSIGNMENT OPERATOR
    a+=2;
    printf("The ans is %d\n",a);
    a-=8;
    printf("The ans is %d\n",a);
    a*=5;
    printf("The ans is %d\n",a);
    a/=4;
    printf("The ans is %d\n",a);
    a%=2;
    printf("The ans is %d\n ",a);
    a&=4;
    printf("The ans is %d\n",a);
    a^=7;
    printf("The ans is %d\n",a);
    
//INCREMENT AND DECREMENT OPERATOR
printf("pre increment operator is %d\n",++a);
printf("post increment operator is %d\n",a++);
printf("pre decrement operator is %d\n",--a);
printf("post decrement operator is %d\n",a--);
//LOGICAL OPERATOR
if((a=18)&&(b>18))
{
    printf("The person is Eligible to vote\n");

}
elseif((a>=18)||(b>19))
{
    printf("The person is  Eligible to vote\n");
}
elseif(!a>18)
{
printf("The person is not Eligible to vote \n");
}
else
{
    printf("The person is not eligible to vote \n");
}

//RELATIONAL OPERATOR
if(a>b)
{
    printf("a is greater than b \n");
}
elseif(a<b)
{
    printf("b is greater than a \n");
}
elseif(a==b)
{
    printf("The value of a and b is same \n");
}
elseif(a>=b)
{
    printf("a is a greater number or a and b are equal \n");
}
elseif(a<=b)
{
    printf("a is less than b or a and b are equal \n");
}
elseif(a!=b)
{
    printf(" a and b are not equal \n");
}
else
{
    printf("a and b are null values \n");
}
//BITWISE OPERATOR
printf("The value using AND operator is %d\n",a&b);
printf("The value using OR operator is %d\n",a|b);
printf("The value using RIGHT SHIFT operator is %d\n ",a>>1);
printf("The value using LEFT SHIFT operator is %d\n ",b<<1);
printf("The value of XOR operator is %d\n",a^1);

}

}

