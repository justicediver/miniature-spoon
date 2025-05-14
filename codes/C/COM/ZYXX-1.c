int main()
{
    int i=0,j=1,*p=&i,*q=&j;
    //i=*&j;
    p=&*&i;
    //j=*p++;
    //i=*&q;
    printf("%d",q);

}
