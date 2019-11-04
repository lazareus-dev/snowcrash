Le binaire level08 n'ouvre pas les fichiers dont le nom contient "token"
On le voit car l'erreur est custom et n'est pas une histoire de droits ou d'existence de fichier
Un strstr dans le binaire fait cette verification, on peut le contourner en testant avec GDB-peda sur une VM
Pas reussi a le reproduire sur l'iso avec GDB vanilla
On peut creer un lien symbolique vers ce fichier avec un autre nom:
	ln -s /home/user/level08/token /tmp/gettok

