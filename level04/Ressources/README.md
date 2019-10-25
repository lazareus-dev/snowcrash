On a un level04.pl dans le home.
On retrouve ce fichier dans /var/www/level04
La conf appache "/etc/apache2/sites-enabled/level05.conf" nous montre que le .pl est appelé par le serveur a l'adresse <IP>:4747/
Apres etude rapide du .pl on se rend compte qu'il prend un param "x" qu'on peut lui passer en URL dans un browser, par ex:
	http://192.1.1.6:4747/?x=hello
il recupere l'argument, et l'affiche avec "print `echo $y 2>&1`;"
Donc si on lui passe en argument "`getflag`" il va executer la commande getflag et print son resultat sur la page.
Comme le .pl a un SUID et appartient a flag04 on se retrouve dans la meme situation qu'au level precedent et on obtient le flag.
