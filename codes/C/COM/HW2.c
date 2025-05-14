int main()
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    for(i=0;i<=a;i++)
    {
        j=i*2+(a-i)*4;
        if(j==b)
        {
            printf("%d %d",i,a-i);
            break;
        }
        if(i==a&&j!=b)
        {
            printf("-1 -1");
        }
    }
}
