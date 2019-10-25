On trouve dans /var/mail un fichier "level05" qui contient :
	*/2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05

le contenu du fichier openarenaserver est:
	#!/bin/sh

	for i in /opt/openarenaserver/* ; do
		(ulimit -t 5; bash -x "$i")
		rm -f "$i"
	done

on a les droits en ecriture dans le dossier /opt/openarenaserver/
le script prend chaque fichier contenu dans le dossier et en execute le contenu (bash -x) puis supprime le fichier.
Donc on peut creer un fichier "coucou" contenant "getflag" pour que le script l'execute. Reste a faire executer le script par flag05 pour obtenir le flag.
La cron a pas l'air d'etre de mon coté pour l'instant...

En fait si:
Je rajoute la ligne "*/2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05" dans la crontab, et dans /opt/openarenaserver/ je rajoute un fichier "coucou" contentant:
	echo `getflag` >> /tmp/flag

Et on obtient le flag en faisant cat /tmp/flag
