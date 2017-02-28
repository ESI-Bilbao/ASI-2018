


/* Los ficheros de cabecera (.h) o a veces llamados includes, sirven para muchas cosas, pero no se puede poner lo que se quiera.
Algo importante es entender que en este tipo de ficheros no debe haber código.
Si lo pones el compilador puede compilarlo, pero no es la función de un fichero include.
En este tipo de ficheros puedes poner includes generales para evitar que los programas de tu aplicación tengan una lista interminable de includes todos iguales.

En estos ficheros puedes poner constantes del preprocesador definidas con l clausula #define. También puedes crear macros con esa clausula que parecen funciones, pero que realmente son plantillas de sustitución de texto. Si haces estas cosas es importante que uses MAYUSCULAS para que cuando las uses en el codigo, otros programadores intuyan que son defines y que por lo tanto los procesará el PREPROCESADOR.

En este tipo de ficheros puedes poner definiciones de variables nuevas con la clausula typedef, o estructuras con struct. Todo esto no generará código, sino que es información para el PREPROCESADOR para que prepare el código a usar.

Algo también común es definir variables de preprocesamiento que pueden servir para decidir que tipo de compilación condicionada hacer del código.
Por ejemplo puedo usar la variable VERSION para decidir que partes compilar o no. O la variable TRACE para poder incluir código extra de pruebas. Para ello se usan clausulas de preprocesamiento como #if TRACE, #ifdef TRACE, #if defined(TRACE), etc.

Algo típico es poner en este fichero la declaración de los prototipos de función que usa tu código. En vez de ponerlo en el .c, conviene describirlo en un .h pues así si alguna vez construyes una libreria con tu código, este fichero sirve para describir las funciones que tiene tu librería.

SI te has fijado en como se ha codificado el codigo fuente .c, verás que se propone escribir el código en orden inverso, es decir la función main al final y segun creas funciones las vas poniendo antes. De esta forma el compilador leerá primero las funciones básicas e irá conociendo su prototipo sin necesidad que lo anuncies. Esto parece una tontería pero ayuda a los programadores a ir construyendo el código sin preocuparse de declarar los prototipos de funciones que no saben al final como quedarán. Cuando acabes tu programa, puedes declarar los prototipos finales de tus funciones en este fichero .h
*/

#define VERSION "0.0"

#define AUTOR "Armando Ferro"

#ifndef TRACE		// Es una forma de comprobar si ya esta definido TRACE
#define TRACE 
#endif

#define CLAVE 1122334455L

#define MAX_BUF 256



