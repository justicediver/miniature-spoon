int main()
{
    int a,b,c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    x=min(min(a,b),min(b,c));
    z=max(max(a,b),max(b,c));
    y=a+b+c-x-z;
    printf("%d %d %d",x,y,z);
}
int min(int i,int j)
{
    if(i<=j)
    {
        return i;
    }
    else
    {
        return j;
    }
}
int max(int i,int j)
{
    if(i<=j)
    {
        return j;
    }
    else
    {
        return i;
    }
}
