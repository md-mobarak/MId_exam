 #include<stdio.h>
 #include<string.h>
int main (){
    char consonant[100001];
    scanf("%s",&consonant);
    int countConsonant =0;
    for (int i = 0; i < strlen(consonant); i++)
    {
        /* code */
        if(consonant[i]!='a'&&consonant[i]!='e'&&consonant[i]!='i'&&consonant[i]!='o'&&consonant[i]!='u' ){
            countConsonant++;
        }
    }
    printf("%d",countConsonant);
    
    return 0;
}