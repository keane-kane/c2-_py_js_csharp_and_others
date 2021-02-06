class TableauNoir:
    """Classe définissant une surface sur laquelle on peut écrire,
    que l'on peut lire et effacer, par jeu de méthodes. L'attribut modifié
    est 'surface'"""

    
    def __init__(self):
        """Par défaut, notre surface est vide"""
        self.surface = ""
    def ecrire(self, message_a_ecrire):
        """Méthode permettant d'écrire sur la surface du tableau.
        Si la surface n'est pas vide, on saute une ligne avant de rajouter
        le message à écrire"""

        
        if self.surface != "":
            self.surface += "\n"
        self.surface += message_a_ecrire
    def lire(self):
        """Cette méthode se charge d'afficher, grâce à print,
        la surface du tableau"""

        
        print(self.surface)
    def effacer(self):
        """Cette méthode permet d'effacer la surface du tableau"""
        self.surface = ""
    
class Test:
    """Une classe de test tout simplement"""
    def afficher():
        """Fonction chargée d'afficher quelque chose"""
        print("On affiche la même chose.")
        print("peu importe les données de l'objet ou de la classe.")
    afficher = staticmethod(afficher)
    
class Test1:
    """Une classe de test tout simplement"""
    def __init__(self):
        """On définit dans le constructeur un unique attribut"""
        self.mon_attribut = "ok"
    
    def afficher_attribut(self):
        """Méthode affichant l'attribut 'mon_attribut'"""
        print("Mon attribut est {0}.".format(self.mon_attribut))