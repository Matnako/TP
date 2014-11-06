#include<stdio.h>

//première partie de l'exercice :

/*int length (char ch[])
	{
		int i=0;
        while ( ch[i]!='\0' )
            i++;
            return i;
    }
    */
//deuxième partie de l'exercice : 

int egal ( char c1[], char c2[])
	{
		int tmp=1;
		for (int i = 0 ; i < 3 ; i++)
		while(tmp && c1[i]!= '\0')
			if(c1[i]!=c2[i]) tmp = 0;
			else i++;
		return tmp && c1[i] == c2[i] ; 
	}


main()
{
	
    
    char chaine1[80];
    char chaine2[80];
    printf(" veuillez entrer une première chaine : ");
	scanf("%s", chaine1);
	printf(" Veuillez entrer une seconde chaine : ");
	scanf("%s", chaine2);
		if (egal(chaine1,chaine2)) printf(" les boucles sont identiques\n");
		else printf("les boucles sont différentes\n");
	
    
}

