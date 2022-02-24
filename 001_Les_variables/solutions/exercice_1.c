#include <stdio.h>
#include <math.h>

/*
Pour cette exercice nous pouvons voir que dans printf nous avons :
%2lu
%39.0f

Pour le premier nous precisont que nous voulons afficher un long non signer
avec lu et si nous avons un nombre qui contient moins de 2 chiffre, nous affichons
un nombre d'espace pour avoir 2 caractere cela permet d'aligner les valeurs

Pour %39.0f comme pour le premier on affiche 39 chiffre et si il n'y en a pas
39 on complete avec des espaces, et le .0 signifie que nous voulons pas de chiffre
apres la virgule car pow retourne un nombre reel
*/
int main(void)
{
	printf("char        = %2lu octets  |  ", sizeof(char));
	printf("taille max = %39.0f\n", pow(2, (sizeof(char)*8)) );

	printf("short       = %2lu octets  |  ", sizeof(short));
	printf("taille max = %39.0f\n", pow(2, (sizeof(short)*8)) );

	printf("int         = %2lu octets  |  ", sizeof(int));
	printf("taille max = %39.0f\n", pow(2, (sizeof(int)*8)) );

	printf("long        = %2lu octets  |  ", sizeof(long));
	printf("taille max = %39.0f\n", pow(2, (sizeof(long)*8)) );

	printf("long int    = %2lu octets  |  ", sizeof(long int));
	printf("taille max = %39.0f\n", pow(2, (sizeof(long int)*8)) );

	printf("float       = %2lu octets  |  ", sizeof(float));
	printf("taille max = %39.0f\n", pow(2, (sizeof(float)*8)) );

	printf("double      = %2lu octets  |  ", sizeof(double));
	printf("taille max = %39.0f\n", pow(2, (sizeof(double)*8)) );

	printf("long double = %2lu octets  |  ", sizeof(long double));
	printf("taille max = %39.0f\n", pow(2, (sizeof(long double)*8)) );

	return 0;
}
/*
Affichage obtenue :
$ gcc exercice_1.c -o exercice1
$ ./exercice1
char        =  1 octets  |  taille max =                                     256
short       =  2 octets  |  taille max =                                   65536
int         =  4 octets  |  taille max =                              4294967296
long        =  8 octets  |  taille max =                    18446744073709551616
long int    =  8 octets  |  taille max =                    18446744073709551616
float       =  4 octets  |  taille max =                              4294967296
double      =  8 octets  |  taille max =                    18446744073709551616
long double = 16 octets  |  taille max = 340282366920938463463374607431768211456
$

Question 3:
-----------

la difference est par exemple pour une variable char nous avons une taille max
a 256 alors que dans le tableau le maximum pour un nombre non signer c'est 255

Cette ecart est du au faite que le nombre 0 est comper dans la taille max donc
la valeurs maximal que nous pourions mettre dans une variable est :
  pow (2, sizeof(char)*8) - 1

*/