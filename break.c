    #include<stdio.h>

    int main()
    {
        int i;
        for(i=1;i<50;i++)
        {
            printf("%d ",i);
            break;             // by using break only 1 will print and code will terminate.
        }
        return 0;
    }