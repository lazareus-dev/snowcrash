On a un binaire avec un SUID.
Ce binaire affiche "level07" quand on l'execute.
On passe le binaire dans la fonction strings.
On repere que le binaire utilise "/bin/echo %s" et qu'il utilise aussi la variable d'env LOGNAME
Si on change LOGNAME (par ex: export LOGNAME=coucou) on constage que le binaire affiche bien "coucou".
Donc: export LOGNAME=\`/bin/getflag\`
Et le binaire nous donne le token
