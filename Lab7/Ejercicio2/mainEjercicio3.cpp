/*2. Crear una clase Color que mantenga 3 valores (RGB). Una segunda clase Material,
tendrá como información una variable de texto que describa algún material (Ejemplo:
madera, vidrio, platico, etc.) Una tercera clase, Objetos, deberá de heredar contenido
de ambas clases con la finalidad de describir diferentes objetos en cuanto a color y el
material. (Ejemplo: mesa de color café y material de plástico)*/

#include <iostream>
#include "Objetos.h"
using namespace std;

int main()
{
    Objetos ob1("mesa","madera",230,210,123);
    ob1.mostrar();

    return 0;
}