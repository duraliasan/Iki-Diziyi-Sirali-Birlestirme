#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[10]= {5,7,20,96,48,14,78,51,3,27};
    int dizi2[4]= {10,1,100,85};
    int diziT[]= {};
    int i=0,j=0,k=0,eleman1,eleman2,temp;
    eleman1 = sizeof(dizi1)/4;
    eleman2 = sizeof(dizi2)/4;
    for(i=0; i<eleman1-1; i++)
    {
        for(j=i+1; j<eleman1; j++)
        {
            if(dizi1[i]>dizi1[j])
            {
                temp=dizi1[i];
                dizi1[i]=dizi1[j];
                dizi1[j]=temp;
            }
        }
    }
    for(i=0; i<eleman2-1; i++)
    {
        for(j=i+1; j<eleman2; j++)
        {
            if(dizi2[i]>dizi2[j])
            {
                temp=dizi2[i];
                dizi2[i]=dizi2[j];
                dizi2[j]=temp;
            }
        }
    }
    i=0;
    j=0;
    k=0;
    while(i<eleman1 && j<eleman2)
    {
        if(dizi1[i]<dizi2[j])
        {
            diziT[k]=dizi1[i];
            k++;
            i++;
        }
        else if(dizi2[j]<dizi1[i])
        {
            diziT[k]=dizi2[j];
            k++;
            j++;
        }
    }
    while(i<eleman1)
    {
        diziT[k]=dizi1[i];
        k++;
        i++;
    }
    while(j<eleman2)
    {
        diziT[k]=dizi2[j];
        j++;
        k++;
    }

    for(i=0; i<eleman1; i++)
        printf("%5d",dizi1[i]);
    printf("\n");
    for(i=0; i<eleman2; i++)
        printf("%5d",dizi2[i]);
    printf("\n");
    for(i=0; i<eleman1+eleman2; i++)
        printf("%5d",diziT[i]);


    return 0;
}
