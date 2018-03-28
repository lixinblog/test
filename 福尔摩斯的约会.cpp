#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[61],str2[61],str3[61],str4[61];
    char a[7][5]= {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    scanf("%s %s %s %s",str1,str2,str3,str4);
    int len1=strlen(str1),len2=strlen(str2),len3=strlen(str3),len4=strlen(str4);
    int s1,s2;
    if(len1>len2)
        s1=len2;
    else
        s1=len1;
    if(len3>len4)
        s2=len4;
    else
        s2=len3;
    int tab1=0,tab2=0,tab3=0;
    for(int i=0; i<s1; i++)
    {
        if(str1[i]==str2[i]&&str1[i]>='A'&&str1[i]<='Z')
        {
            tab1=i;
            break;
        }
    }
    int y=str1[tab1]-'A';
    for(int j=tab1+1; j<s1; j++)
    {
        if(str1[j]==str2[j])
        {
            if(str1[j]>='0'&&str1[j]<='9')
            {
                tab2=j;
            }
            if(str1[j]>='A'&&str1[j]<='N')
                tab2=10+str1[j]-'A';
        }
    }
    for(int k=0; k<s2; k++)
    {
        if(str3[k]==str4[k])
        {
            if(str3[k]>='A'&&str3[k]<='Z')
                tab3=k;
            if(str3[k]>='a'&&str3[k]<='z')
                tab3=k;
        }
    }
    printf("%s %02d:%02d",a[y],tab2,tab3);
    return 0;
}
