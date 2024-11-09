//Escribir un programa que cree y guarde una cadena de caracteres en un archivo.
//("agregar" se refiere a la capacidad de escribir nuevos datos al final del archivo sin borrar el contenido existente)
//r -> lectura,existe el archivo
//w -> crea o abre archivo para escritura...borrando lo anterior
//a -> crea o abre archivo para agregar...no borra lo anterior
//r+ -> abre para lect/escritura
//a+ -> crea para lect/escritura
//w+ -> abre para lect/agregar
#include <stdio.h>

int main()
{
    char archivo[]="ejercicio1.txt";
    FILE *fp;
    fp= fopen(archivo,"w");
    if(fp==NULL)
    {
        printf("No hay nada para abrir\n");
        return -1;
    }else
        {
            printf("Se abrio con exito\n");

            fprintf(fopen(archivo,"a"),"Bocha lechonga \n");
        }
    fclose(fp);
    return 0;
}
