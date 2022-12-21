#include <stdio.h>
#include <stdlib.h>

int main (){

//Este es un comentario para cambiar algo en mi programa
printf("Terminologia \n\n");

printf("Un REPOSITORIO es todo proyecto que esta siendo seguido por git,\n");
printf("o sea que ya tiene un historial de cambios seguidos por git\n\n");

printf("Un COMMIT es cada uno de los cambios registrados y subidos a git con mensajes\n\n");

printf("Las RAMAS son ramificaciones, bifurcaciones que toma el proyecto\n");
printf("La rama principal suele llamarse MASTER\n");
printf("Cada que se quiere trabajar con una caracteristica nueva o corregir algo\n");
printf("para trabajar en un ambiente aislado y si algo se rompe no se compromete\n");
printf("el proyecto, luego esa rama se puede unificar con el proyecto principal\n\n");

printf("Un CLONE es una copia exacta del repositorio. Clonar repositorio en su equipo\n");
printf("local\n\n");

printf("Un FORK es un proyecto diferente que se crea a partir de otro\n");
printf("por ejemplo las distribuciones de Linux\n\n");

printf("Git es un sistema de control de versiones VCS, eso es lo que es Git\n\n");
printf("GitHub es una pagina para subir repositorios a la nube, que al\n");
printf("final ese repositorio viene siendo una RAMA REMOTA llamada ORIGIN\n\n");

printf("Primero se debe crear una carpeta en local con el comando mkdir NOMBRECARPETA\nLuego con dir se puede ver los archivos que hay en ese directorio\n");
printf("Para ubicarnos en el directorio se pone cd .. o tambien cd, luego podemos poner ls para ver todos los archivos de donde nos ubicamos\n");
printf("Despues seleccionamos cd NOMBRECARPETA en cuanto nos aparezca en el directorio seleccionado\n");
printf("Despues estando ahi inicializamos git con el comando git init\n");
printf("Seguido ya estamos en git de forma local, para despues anadir un archivo a nuestro repositorio local, en este caso use .c con nano\n");
printf("Luego guardamos en local con el comando git add NOMBRE.c, seguido de git commit -m ''Comentarios''(es imp que sea comilla doble y no sencilla)\n");
printf("Seguidamente se pone git branch -M main, luego git remote add origin https URL. Con ello vinculamos el repo de GitHub al nuestro local\n");
printf("Despues git push -u origin main, luego pide usuario de github y TOKEN que este ya lo tengo guardado en el archivo de texto. Fin\n\n");

printf("La sintaxis de cada uno se encuentra en el archivo de texto\n\n");
printf("Ahora estoy trabajando en una rama diferente a la cual nombre RAMA2, para ello uso el comando git branch para ver en que rama estoy\n");
printf("Para crear una nueva rama uso el comando git branch NOMBRE (en este caso use RAMA2)\n");
printf("Ahora bien, para cambiarnos de rama usamos el comando git checkout RAMA2 y listo, verificamos con git branch para saber donde estamos\n");
printf("Para ver los cambios entre las ramas usamos el codigo git diff ramaX ramaY\n");
printf("Despues ya podemos modificar el programa que toda la modificacion quedara guardada en esa rama y al cambiarnos a la principal quedara como si nada\n\n");
printf("No se puede cambiar de rama a menos que comites todos los archivos modificados de tu repositorio\n");
printf("Luego de modificar, se tiene que comitar, despues subir con push como antes y listo para actualizar\n\n");

printf("Para unificar las ramas secundarias con la principal main se hace lo siguiente:\n");
printf("Primero nos ubicamos en la rama que nos queremos unificar, en este caso la main, luego\n");
printf("ahora utilizamos el codigo git merge RAMA2 (osea la rama que queremos unir).Lo siguiente que hara es fusionar las dos ramas en el repositorio local. Luego tenemos que subir esos cambios al repositorio remoto GitHub \n");
printf("Para subirlo utilizamos git push origin main (que es a la rama principal donde quiero unirlo)\n");


return 0;
}
