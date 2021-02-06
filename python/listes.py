print("Hello World")
print("Aujourd'hui")
print("C'est \"Dommage!\"")
print("Hum \Oh/")

def afficher_float(f):
    if type(f) is not float:
        raise TypeError("le type de la variable doit être un decimal")
    f = str(f)
    p_e, p_d = f.split(".")
    
    return ",".join([p_e, p_d[:2]])
    
    
#appelle
f = afficher_float(2.5685455)
print(f)
maList = [1, 2,5.2, "ca", []]
for elt in maList:
    print(elt)
    
i = 0
while i < len(maList):
 
    print(maList[i])
    i+=1
    
maList = [1, 2,5.2, "ca", []]
for elt in enumerate(maList):
    print(elt)
