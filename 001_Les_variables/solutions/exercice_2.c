#include <stdio.h>

int main(void)
{
	int first_var;
	unsigned int second_var;

	/*
	*** question 1 et 2
	*/
	printf("variable signe\n");
	first_var = 0x7fffffff;
	// la valeurs 0x7fffffff est la valeurs maximale d'un int
	// a cause du complement a 2 pour avoir un nombre negatif
	printf("valeur de first_var = %d\n", first_var);
	first_var = first_var + 1;
	printf("ajoue de 1 a first_var\n");
	printf("valeur de first_var = %d\n", first_var);

	printf("\n-------------------------------------------\n\n");

	/*
	*** question 3
	*/
	printf("variable non signe\n");
	second_var = 0xffffffff;
	// comme nous ne pouvons pas avoir de nombre negatif ici
	// la valeur maximal est bien 0xffffffff
	printf("valeur de second_var = %u\n", second_var); // %u permet de specifier que le nombre est non signe
	second_var += 1;
	printf("ajoue de 1 a second_var\n");
	printf("valeur de second_var = %u\n", second_var);

	return 0;
}

/*
Affichage obtenue :

$ gcc exercice_2.c -o exercice2
$ ./exercice2
variable signe
valeur de first_var = 2147483647
ajoue de 1 a first_var
valeur de first_var = -2147483648

-------------------------------------------

variable non signe
valeur de second_var = 4294967295
ajoue de 1 a second_var
valeur de second_var = 0
$

Comme nous avons les valeurs maximal dans les variables, si nous ajoutons 1
lors du calcule dans le premier cas la bite le plus fort serrat passer a 1
et a l'affichage si le premier bit est a 1 nous avons un complement a 2 qui
est effectuer ce qui nous donne la valeur la plus petite possible. Pour le
deuxieme cas, nous avont tous les bites qui sont a 1 et quand on ajoute une
nouvelle fois 1, avec le principe d'addition binaire, nous avons tous les bites
qui passe a 0 et une retenue qui ne peut etre stocket dans la variable par
debordement de place donc la varible repasse a 0



question 4:
-----------
dans cette situation nous pouvons surment depacer la limite de 255 d'un unsigned char
qui va provoquer la remise a zero du compteur et donc nous auront le nombre d'eleve
present dans l'etablissement modulo 256 sans savoir combient de fois. Il nous serrat
donc impossible de donner le vrai nombre de personne dans l'etablissement.

Pour evite cette erreur nous pouvons utiliser une variable short qui nous permet de
compter jusqu'a 65 535 personnes. Dans ce cas il nous est possible d'utiliser une variable
short, mais si nous devrions compter le nombre de personnes dans le monde cela n'est plus
possible avec cette variable, il faut donc utilise une variable de taille proposrtione en
fonction du probleme.

Ce probleme en informatique n'est pas forcement rependue mais elles sont extremement
problematique. Un exemple que nous verront dans le future c'est : bug de l'an 2038
 - https://fr.wikipedia.org/wiki/Bug_de_l%27an_2038
En resume ce bug qui viendrat dans l'anner 2038 est cause du fait que le temps nous
le stockont dans des variables 32 bits et cette variable s'incremente de 1 chaque seconde
mais nous avons estimer que en 2038 la variable serrat arrive a sont maximum et la seconde
suivante la valeur serrat a 0 et donc la date passerat a une date du passe. Biensur cette
erreur est deja plus ou moins resolue car nous somme passer a une variable de 64 bites mais
maintenant dans quelque milliard de milliard d'annee ce probleme reviendrat.
*/