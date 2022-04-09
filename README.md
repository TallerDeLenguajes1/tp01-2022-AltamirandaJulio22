# Taller de lenguajes 1

_Ejercicio 2 - Repaso de punteros_

### 2 a) Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?

</br>

Es conveniente incluir el archivo .gitignore si se desea ignorar directorios o archivos del proyecto
</br>

Es importante hacerlo cuando hay archivos dentro del directorio de trabajo que no son relevantes para el funcionamiento o que causan redundancia para el mismo, o que el mismo programador por algunos motivos decide que se deben ignorar, etc.
<br>

Inicialmente se crea el archivo con el nombre ".gitignore" en la raiz del proyecto. 
Y estas son algunas referencias que contendra el archivo ".gitigonore" para indicarle a git cuales son los archivos que se quieren ignorar dentro del proyecto

```
# ignore all .a files
*.a

# but do track lib.a, even though you're ignoring .a files above
!lib.a

# only ignore the TODO file in the current directory, not subdir/TODO
/TODO

# ignore all files in any directory named build
build/

# ignore doc/notes.txt, but not doc/server/arch.txt
doc/*.txt

# ignore all .pdf files in the doc/ directory and any of its subdirectories
doc/**/*.pdf
```
<br>

### 3 c)Revise los archivos subidos en su repositorio de github. ¿Que archivos ve?¿Cuál cree que no hace falta que esté?

<br>
Dentro de los cambios del primer commit se observan archivos de compilación, lo cuál, es innecesario mantener dentro del repositorio.

<br>

### Nota. Si resolvió correctamente los puntos ii y iii notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿es igual a los anteriores? ¿por qué? Responder en el archivo readme.md

<br>

En los puntos ii) y iii) el resultado es el mismo ya que, en ii) se imprime el valor del puntero, o sea, la dirección de memoria de la variable y en iii) se imprime la dirección de memoria de la variable.

<br>
En el punto 4 el resultado es otro, porque en vez de imprimir el valor del puntero que es la dirección de memoria de la variable, se imprime la dirección de memoria del puntero.