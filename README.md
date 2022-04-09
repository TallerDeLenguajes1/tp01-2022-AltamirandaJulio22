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

<!-- Y estas son algunas referencias que contendra el archivo para indicarle a git cuales son los archivos que se quieren ignorar dentro del proyecto: -->





<!-- 
Mira **Deployment** para conocer como desplegar el proyecto.


### Pre-requisitos 📋

_Que cosas necesitas para instalar el software y como instalarlas_

```
Da un ejemplo
```

### Instalación 🔧

_Una serie de ejemplos paso a paso que te dice lo que debes ejecutar para tener un entorno de desarrollo ejecutandose_

_Dí cómo será ese paso_

```
Da un ejemplo
```

_Y repite_

```
hasta finalizar
```

_Finaliza con un ejemplo de cómo obtener datos del sistema o como usarlos para una pequeña demo_

### aqui voy a escribir una lista:
1. escribir
2. leer
3. escuchar
### otra lista más:
- escuchar
- leer
- jugar 

 -->
