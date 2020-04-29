#include "Pompes.h"
#include "cocktail.h"

void ChoixCocktail(String payload) {
  if (payload == "Bloco")     
     Bloco();
  else if (payload == "RhumMultifruits")   
    rhumMultifruits();
  else   
    Serial.println("Le cocktail " + payload +   " n'a pas été trouvé");
}

void Bloco() {
  Serial.println("La création du Bloco est en cours");
  //On démare la séquence propre au bloco par exemple :
  Pompe1();
}

void rhumMultifruits() {
  Serial.println("La création de votre cocktail RhumMultifruits est en cours");
}
