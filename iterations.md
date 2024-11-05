# Práctica 07. Iteraciones. Git y GitHub.

# Factor de ponderación: 7

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Sea capaz de resolver problemas sencillos en C++ usando todos los conocimientos adquiridos hasta ahora, 
y en particular haciendo uso de sentencias iterativas
* Comience a utilizar funciones en sus programas y modularice sus programas en diferentes funciones
* Estudie y conozca los fundamentos de trabajo con las herramientas Git y GitHub

### Rúbrica de evaluacion de esta práctica
Se señalan a continuación los aspectos más relevantes (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica.
Se comprobará que el alumnado:
* Es capaz de escribir programas simples en C++ que resuelvan problemas de
  complejidad similar a los que se han propuesto para esta práctica
* Hace que sus programas se estructuren en torno a diferentes funciones (sean modulares)
* Ha automatizado la compilación de sus programas usando un fichero `Makefile`
  para cada uno de los programas que desarrolle 
* Acredita que es capaz de subir programas a la plataforma 
[Jutge](https://jutge.org/)
para su evaluación
* Ha incluido un comentario prólogo en todos los ficheros (`*.cc`, `*.h`) de sus ejercicios
* Hace que todos los programas de sus prácticas se ajusten a la
[Guía de estilo de Google para C++](https://google.github.io/styleguide/cppguide.html) 
* Acredita que es capaz de editar ficheros remotos en su VM usando vi
* Demuestra que es capaz de ejecutar comandos Linux en su VM

### GitHub Classroom
En el futuro se utilizará GitHub Classroom (una plataforma relacionada con GitHub) para gestionar las
prácticas de *Informática Básica*.
En esa plataforma, para la realización de cada práctica recibirá una invitación a una tarea que tendrá que
aceptar.
Una vez acepte la invitación tendrá que clonar con `git` un repositorio asociado a la tarea.
Ese repositorio privado será el punto de partida y tendrá Ud. que añadir en él directorios con los programas
que realice.

El enlace de invitación a la tarea que se le comunicará tiene una apariencia similar a
`https://classroom.github.com/a/uNbth9vD`
Si lo introduce en un navegador, se le solicitará que se autentifique en su cuenta de GitHub,
y una vez autentificada/o le llevará a una pantalla
[como esta](https://raw.githubusercontent.com/IB-2024-2025/P07-iterations/refs/heads/main/join.png)
en la que se le solicitará que se una a la "*classroom*" IB-2024-2025.
Para ello ha de seleccionar su dirección de correo de la lista de identificadores (*Identifiers*) que figura en esa página.
A continuación se le solicitará que "Acepte la tarea Practica-Nombre".
Habrá una tarea asociada con cada una de las prácticas de la asignatura.

Cuando lo haya hecho aparecerá una pantalla 
[como esta](https://raw.githubusercontent.com/IB-2024-2025/P07-iterations/refs/heads/main/accepted.png)
que indica que ha aceptado Ud. la tarea asignada y
cuando refresque la pantalla le mostrará 
[otra pantalla](https://raw.githubusercontent.com/IB-2024-2025/P07-iterations/refs/heads/main/ready.png)
en la que figura el enlace al repositorio que ha sido creado
para su trabajo en la práctica.

A través de ese enlace accederá Ud. en GitHub al repositorio privado que se ha creado para que desarrolle en
él los programas correspondientes a la práctica en cuestión.
[El enlace que figura en ese repositorio](https://raw.githubusercontent.com/IB-2024-2025/P07-iterations/refs/heads/main/link.png)
(elija la opción SSH para el enlace) es el que ha de entregar Ud. en la tarea del aula virtual correspondiente a la práctica.

Recuerde que para cada práctica tiene que entregar 2 elementos: 
* Este enlace a su repositorio. Ese enlace lo puede ya escribir en la tarea correspondiente del aula virtual: 
no es necesario que espere a la sesión de evaluación para subirlo.
* Un fichero `.tar.gz` conteniendo todos los programas que desarrolle tanto antes como durante la sesión de evaluación.
Sí ha de esperar a la sesión de evaluación para subir el fichero .tar.gz conteniendo sus programas.

Ese mismo enlace es el que ha de utilizar para realizar una copia local (clone) del repositorio en su máquina
virtual y comenzar a trabajar en los ejercicios de la práctica:

```
git clone https://github.com/IB-2024-2025/P07-iterations <DirectorioLocal>
```

### Material de estudio complementario
Estudie todo lo que se indica en el epígrafe 
[Comments](https://google.github.io/styleguide/cppguide.html#Comments) 
de la Guía de Estilo de Google y ponga en práctica todo lo que en ella se propone.

Estudie del
[tutorial de referencia](https://www.learncpp.com/)
en la asignatura los siguientes apartados:
* [Comments](https://www.learncpp.com/cpp-tutorial/comments/)
* El capítulo 2
[Basics: Functions and Files](https://www.learncpp.com/cpp-tutorial/introduction-to-functions/)
(completo)
* [Command line arguments](https://www.learncpp.com/cpp-tutorial/command-line-arguments/)

### Diseño de los programas
Recuerde las que se han estudiado como *Buenas Prácticas* a la hora de diseñar sus funciones:
* El código deberá organizarse en diferentes funciones 
* Cada función deberá realizar una única tarea y hacerlo correctamente 
* El identificador de una función debe reflejar claramente lo que la función hace 

Tal como se indica en 
[How to design your first programs](https://www.learncpp.com/cpp-tutorial/how-to-design-your-first-programs/)
su código debiera estar organizado en torno a funciones que se invocan desde la función *main()*.
Así la apariencia habitual de la función principal de cualquier programa debiera ser algo similar a:
``` .cpp
int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {
    return 1;
  }
  GetUserInput();
  GetMathematicalOperation();
  GetUserInput();
  CalculateResult();
  PrintResult();

  return 0;
}
```
en el sentido de que la función *main()* es una mera *orquestadora* de las funciones que componen el programa.
*main()* pasa a esas funciones los parámetros necesarios para su funcionamiento y las diferentes funciones
devuelven a *main()* el valor que calculan (si fuera el caso).

Incluya en todos sus programas sendas funciones cuya declaración sería:
```
void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber);
```
La primera de ella se invocará al comienzo de la ejecución para imprimir un mensaje explicativo de
la finalidad del programa en cuestión.
La función *CheckCorrectParameters()* devolverá `true` si al programa se le han pasado el número adecuado de
parámetros por línea de comandos (3 en el ejemplo anterior) y `false` en caso contrario.
Estude el programa 
[check-correct-parameters.cc](https://github.com/IB-2023-2024/IB-class-code-examples/blob/master/Functions/check-correct-parameters.cc)
de los ejemplos de código de las clases de teoría que ilustra el uso de estas dos funciones.

### Ejercicios
* Al realizar los ejercicios cree dentro de su repositorio de esta práctica un directorio diferente
para cada uno de los ejercicios.
Asigne a cada uno de esos directorios nombres significativos. 
* Automatice la compilación del programa correspondiente a cada ejercicio con un fichero `Makefile`
independiente para cada programa e inclúyalo en el correspondiente directorio.

1. Escriba un programa que lea un número natural e imprima como salida la suma de los dígitos del número en cuestión. 
```
Public test cases
Input           Output
2022              6
1492             16
0                 0
```

2. Desarrolle un programa que imprima los N primeros términos de la 
[Serie de Fibonacci](https://en.wikipedia.org/wiki/Fibonacci_number). 
Los primeros términos de la serie son: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ...
```
Public test cases
Input           Output
5                 0 1 1 2 3
9                 0 1 1 2 3 5 8 13 21
1                 0
```

3. Estudie en el tutorial Learn C++ los epígrafes
[Numeral systems (decimal, binary, hexadecimal, and
octal)](https://www.learncpp.com/cpp-tutorial/numeral-systems-decimal-binary-hexadecimal-and-octal/)
y
[Converting between binary and
decimal](https://www.learncpp.com/cpp-tutorial/converting-between-binary-and-decimal/).

Escriba un programa `binary-to-decimal.cc` que convierta números binarios en decimal.
No utilice los tipos `std::string`, `std::vector` o `std::array`.
Si la entrada no fuera un número binario, el programa debe imprimir en pantalla un mensaje de error y
finalizar la ejecución.
```
Public test cases
Input           Output
1111              15
1011110           94
1018110        Wrong Input
10010111         151
```

4. Escriba un programa `decimal-to-binary.cc` que convierta números de decimal a binario.
No utilice los tipos `std::string`, `std::vector` o `std::array`.
```
Public test cases
Input           Output
15              1111
94              1011110
151             10010111
```

5. Escriba un programa `leap-year.cc` que indique si un año es o no 
[bisiesto](https://en.wikipedia.org/wiki/Leap_year)
Un año bisiesto tiene 366 días. 
Después de la reforma gregoriana, los años bisiestos son aquellos múltiplos de cuatro que no terminan con dos ceros, 
y también los años que terminan con dos ceros tales que, después de eliminar estos dos ceros, son divisibles por cuatro. 
Así, 1800 y 1900, a pesar de ser múltiplos de cuatro, no fueron años bisiestos; por el contrario, 2000 fue un año bisiesto. 

```
Public test cases
Input        Output
1999           NO
1968          YES
2000          YES
1800           NO
```

Tenga en cuenta que en la evaluación de las prácticas de *Informática Básica* se utlizarán ejercicios de Jutge, 
de modo que resolver problemas en esa plataforma mejorará sus capacidades como programadora. 
Realice todos los ejercicios del curso Informática Básica de Jutge que sea capaz. 

Recuerde siempre que Jutge solo evalúa la corrección de su programa desde un punto de vista de su correcto funcionamiento. 
Su código ha de cumplir adicionalmente con los requisitos de modularidad, formato y estilo.
