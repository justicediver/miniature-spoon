int main()
{
    /*int a, b,c,d,x;

    scanf("%d %d", &a, &b);
    x=a*b;
    d=2*(a+b);
    printf("perimeter=%d\narea=%d",d,x);
    return 0;


    */

    char a,b;
    int x;
    scanf("%c",&a);
    x=a+3;
    if(x>122)
    {
        x=x-26;
    }
    printf("%c",x);

}
