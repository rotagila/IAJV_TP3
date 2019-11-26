Projet numero 3 de IA pour Jeux Vidéo 8IAR125.
Membres :
BARLOY Nathan BARN05019806
CORSINI Timothée CORT20069704
DELENCLOS Victor DELV19119709
LE GLOUANEC Bérénice LEGB16599701
RAMAT Clément RAMC17129700

Il est préférable de laisser le dossier Common dans ce dossier, 
au même niveau que les autres dossiers.

Fonctionnalités :

Quand l'humain contrôle un bot, il est possible de créer des
"followers" qui sont dans la même équipe que l'humain. Ces
followers ne se tirent pas dessus, ils sont visibles en bleu.
Quand un follower meurt, il lâche une de ses armes (en priorité
celle qu'il porte, si c'est l'arme pas défaut, il jette une arme
de son inventaire au sol), cette arme n'est pas placée dans un
endroit "sûr" pour l'équipe contrairement à ce qui était demandé
dans le sujet.
Le joueur peut ordonner à ses alliés de tirer sur une cible
adverse, la communication se fait via le protocole de message
du devoir 1.
Quand le joueur perd le contrôle du bot, ses "followers" 
deviennent neutres.

Les bot "neutres" sont rouges, les followers sont bleus.

Nouveaux contrôles :
clic gauche : ordonner aux alliés de tirer sur un ennemi ciblé
flèche droite : ajouter un follower (si le joueur possède un bot)
flèche gauche : retirer le dernier follower créé

(si on supprime un raven_bot avec la flèche du bas, cela peut 
supprimer un follower si c'est le dernier bot créé)