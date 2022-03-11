#include <stdio.h>

int main(void)
{
	char c1 = 97;
	char c2 = 'z';

	printf("c1 | c2\n-------\n");

	/*
	*** question 1 et 2
	*/
	while (c1 < 123)
	{
		printf(" %c | %c\n", c1, c2);
		c1++;
		c2--;
	}

	printf("\n------------------\n\n");
	/*
	*** question 4
	*/
	printf("%c%c%c%c%c%c%c%c", 60, 83, 65, 76, 85, 84, 62, 10);

	/*
	*** question 5
	*/
	printf("%c", 7);
	return 0;
}

/*
$ gcc exercice_3.c -o exercice3
$ ./exercice3
c1 | c2
-------
 a | z
 b | y
 c | x
 d | w
 e | v
 f | u
 g | t
 h | s
 i | r
 j | q
 k | p
 l | o
 m | n
 n | m
 o | l
 p | k
 q | j
 r | i
 s | h
 t | g
 u | f
 v | e
 w | d
 x | c
 y | b
 z | a

------------------

<SALUT>
$

Dans le printf lorsque nous utilisont %c, la fonction va lire un nombre et l'afficher
avec ca corspondance dans la table ascii. En realite quand nous faisont pour la seconde
variable :
  char c2 = 'z';
cela revient a faire
  char c2 = 122;
c'est lors de la compilation du code que 'z' va etre convertie par ca valeur decimale

Pour les caracteres que nous pouvons pas voir, nous avons des equivalence
saut a la ligne -> \n
bip du PC       -> \a
...
Mais la aussi \n serrat convertie aussi par ca valleur en decimale
*/