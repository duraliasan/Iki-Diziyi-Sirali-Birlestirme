#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[10]= {5,7,20,96,48,14,78,51,3,27};
    int dizi2[4]= {10,1,100,85};
    int diziT[]= {};
    int i=0,j=0,k=0,elemanke1,elemanke2,temp;
    elemanke1 = sizeof(dizi1)/4;
    elemanke2 = sizeof(dizi2)/4;
    for(i=0; i<elemanke1-1; i++)
    {
        for(j=i+1; j<elemanke1; j++)
        {
            if(dizi1[i]>dizi1[j])
            {
                temp=dizi1[i];
                dizi1[i]=dizi1[j];
                dizi1[j]=temp;
            }
        }
    }
    for(i=0; i<elemanke2-1; i++)
    {
        for(j=i+1; j<elemanke2; j++)
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
    while(i<elemanke1 && j<elemanke2)
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
    while(i<elemanke1)
    {
        diziT[k]=dizi1[i];
        k++;
        i++;
    }
    while(j<elemanke2)
    {
        diziT[k]=dizi2[j];
        j++;
        k++;
    }

    for(i=0; i<elemanke1; i++)
        printf("%5d",dizi1[i]);
    printf("\n");
    for(i=0; i<elemanke2; i++)
        printf("%5d",dizi2[i]);
    printf("\n");
    for(i=0; i<elemanke1+elemanke2; i++)
        printf("%5d",diziT[i]);


    return 0;
}
