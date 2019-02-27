
//marie souley doudou

#include<stdio.h>
#iclude<stlib.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
   
   int main(int argc, string argv[])
   
   {
       if (argc != 2)
       {
           printf ("tape again :")
       }
       
       
   int k = atoi (argv[1])
   string m = get_string ("please insert the plaintext :");
   
   printf("ciphertext : ");
   
   for(int i = 0, n = strlen(p); i<n; i++)
 if(argc!=2)
 {
    int k=atoi(argv[1]);
    string plaintext=get_string("plaintext: ");
    for (int plaintext = 0, n=strlen[plaintext]; i < n; i++)

    if (isupper(plaintext[i]))
    {
        printf ("%c",(plaintext[i] -'A' ) + k)%26  + 'A');
    }

    else if (islower(p[i]))
    {
        printf ("%c" ,(plaintext[i] - 'a') + k)%26 + 'a');
    }
    else
    {
        printf ("%c" ,plaintext[i])
    }
}
 printf ("\n");
    }