#include<string.h>
char *MergeString(char *word1,char *word2);
int main()
{
    char word1[20]="abc",word2[20]="pqr";
    MergeString(word1,word2);
    printf("\n");
    return 0;
}
char *MergeString(char *word1,char *word2)
{
    int i,j=-1,k=0,l1,l2;
    l1=strlen(word1);
    l2=strlen(word2);
    char temp[l1+l2];
    for(i=0;word1[i];i++)
    {
        temp[k]=word1[i];
        k++;
        for(j++;word2[j];j++)
        {
            temp[k]=word2[j];
            k++;
            break;
        }
    }
    while(word2[j]!='\0')
    {
        temp[k]=word2[j];
        j++;
        k++;
    }
    temp[k]='\0';
    for(k=0;temp[k];k++)
    {
        printf("%c",temp[k]);
    }
}