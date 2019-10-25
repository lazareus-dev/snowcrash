On trouve un binaire qui output "Exploit Me"
Il a un SUID et son owner est flag03, go exploiter ca pour une escalation de privilege.

En jouant simplement avec le binaire on se rend compte qu'il ne fait qu'ecrire "Exploit Me" sur stdout.
On peut utiliser la commande "strings" pour afficher toutes les strings presentes dans le binaire.
On trouve "/usr/bin/env echo Exploit me", ce qui veut dire que le binaire ne fait pas simplement un "echo Exploit Me" mais utilise la commande "env"
Et la on dit merci la branche systeme.
env permet d'executer une commande avec un environnement specifique.
Le tricks ici est de copier le binaire "getflag" dans /tmp en le renommant "echo", puis de mettre le path /tmp en tete de la variable PATH.
Ce qui fait que pour trouver la commande "echo", le systeme va chercher partout dans le path, en commencant par /tmp.
Bingo il trouve le "getflag" deguisé en "echo" et l'execute, comme le propriétaire du binaire "level03" est "flag03", le systeme va considerer que c'est le
user "flag03" qui a executé "getflag" et boum on a le flag pour le user level04 !
