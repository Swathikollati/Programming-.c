 #include<stdio.h>
 void main()
 {
 int num,temp,rem,rev=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
    rem=temp%10;
    rev=rev*10+rem;
    temp=temp/10;
    }
    printf("reversed number is %d\n",rev);
    if(num==rev)
    printf("%d is a palindrome number ",num);
    else
    printf("%d is not a palindrome number ",num);
    }