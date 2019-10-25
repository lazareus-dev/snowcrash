On recupere le fichier .pcap qu'on ouvre avec Wireshark.
C'est un paquet de transmissions TCP entre un client et un serveur d'authentification, on peut donc voir les inputs envoyees par le client.
Wireshark permet d'afficher "proprement" le fil tcp en faisant clic-droit > follow -> TCP Stream
On voit les inputs correspondant au Password.
On note la presence de caracteres ".", qui apres check de leur valeur ascii correspondent a 7f(hexa) ou 127(dec) qui represente la touche DEL.
Donc l'input a ete corrige c'est pour ca que le mot de passe n'est pas "ft_wandr...NDRel.L0L" mais "ft_waNDReL0L"

