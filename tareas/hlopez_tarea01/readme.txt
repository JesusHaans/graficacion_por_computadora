Nombre:  Jesus Haans Lopez Hernandez
Numero de cuenta: 311245488
Version de gcc: gcc version 9.4.0 (Ubuntu 9.4.0-1ubuntu1~20.04.1)
Sistema Operativo: Windows 10 con wls (Ubuntu 9.4.0-1ubuntu1~20.04.1)


Para esta practica es necesario contar con el compilador gcc para compilar los archivos *.cpp 
a continuacion diremos como instalar en los diferentes sistemas operativos.

----------------------------------------------WINDOWS----------------------------------------------

En Windows no viene instalado el compilador de C++, por lo que nos tocará instalarlo manualmente

-------Instalando el compilador-------

El compilador para C++ que usamos en Windows se llama g++, y para poder instalarlo necesitamos descargar MinGW. 
Este es un pequeño administrador que nos permitirá descargar el compilador de diversos lenguajes, incluyendo el 
de C++. Puedes descargar MinGW desde el siguiente enlace:

https://sourceforge.net/projects/mingw/

Simplemente debes darle click al botón que dice “Download”, y después de unos segundos se descargará automáticamente.

Una vez que el instalador haya sido descargado debes abrirlo. Al hacerlo te aparecerá la siguiente ventana con información 
acerca del software, simplemente debes darle click al botón de “Install”.

Te pedirá que le proporciones una carpeta en la cual hacer la instalación. Por defecto viene la carpeta C:\MinGW, si tú lo 
deseas puedes cambiarla, aunque te recomiendo dejar la carpeta por defecto. En dado caso de que la cambies, debes recordar 
cuál carpeta elegiste, ya que la usaremos más adelante. Ahora simplemente dale click al botón “Continue”.

Verás la siguiente pantalla, esto empezará a descargar el administrador de instalación de MinGW, simplemente debes esperar
a que termine y al final hacer click en el botón “Continue”.

A continuación verás la siguiente pantalla… ¡No te asustes! Este es un administrador que nos permite instalar compiladores 
para diferentes lenguajes. En este caso queremos instalar el compilador para C++ así que elegimos la opción “mingw32-gcc-g++”. 
Al darle click verás que sale un menú, ahí dale click a la opción que dice “Mark for Installation”.

Puedes asegurarte de que este es el compilador de C++, ya que en el apartado “Description” verás que dice 
“The GNU C++ Compiler” (el compilador GNU de C++).

Una vez seleccionado, te vas a la pestaña “Installation” ubicada en la esquina superior izquierda y seleccionas la opción 
“Apply Changes”.

Se te abrirá esta ventana emergente pidiéndote confirmación de los cambios, simplemente dale click al botón que dice “Apply”
y el administrador empezará a descargar e instalar el compilador para C++.

¡Cuando termine de instalarse te saldrá este mensaje que te dice que la instalación terminó correctamente! Dale click al botón 
que dice “Close” y ya puedes cerrar el administrador de MinGW.

¡Ya tenemos el compilador de C++ instalado! Con esto estamos casi listos para trabajar, sin embargo, nos falta un paso muy importante.


---Agregando el compilador al PATH de Windows---

Más adelante estaremos haciendo uso de una extensión que nos ayudará a correr nuestros programas escritos en C++, pero esta 
extensión necesita que el compilador esté agregado al PATH de Windows.

Este PATH es básicamente una variable que existe en nuestro sistema operativo que contiene una lista de rutas que apuntan a 
diferentes carpetas donde pueden encontrarse algunos programas importantes, y es aquí donde agregaremos a nuestro compilador.

Para ello nos vamos al buscador de Windows y escribimos “Variables de entorno”. En los resultados seleccionamos la opción 
que dice “Editar variables de entorno del sistema”.

Se te abrirá esta ventanita, aquí simplemente debes darle click al botón que dice “Variables de entorno...”.

Se te abrirá esta otra ventanita, aquí debes buscar la variable llamada Path dentro de la sección que dice 
“Variables del sistema”. Si no la ves a primera vista puede que este ubicada mucho más abajo. Una vez la 
encuentres seleccionala y dale click al botón que dice “Editar”.

Se abrirá está ventana, esta es la lista de rutas hacia los programas importantes que contiene la variable. 
Aquí es donde añadiremos a nuestro compilador, y para ello debes darle click al botón que dice “Nuevo”.

Verás que se agregará un nuevo campo donde podrás escribir una nueva ruta, aquí escribiremos la ruta “C:\MinGW\bin”. Esta es 
la ruta que dejamos por defecto cuando instalamos MinGW, si tú la cambiaste entonces deberás escribir la ruta en donde 
guardaste el compilador. Cuando ya tengas tu ruta escrita dale click al botón que dice “Aceptar” en todas las ventanas que 
tengas abiertas.

¡Con eso ya deberías tener tu compilador agregado en el PATH de Windows! Y podemos comprobarlo, para ello ve al buscador de 
Windows, escribe “CMD” y dale click a la opción que dice “Símbolo del sistema”.

Se te abrirá esta ventanita, aquí debes escribir el comando g++ --version. Si te sale este mensaje significa que tu compilador 
está instalado correctamente y que se agregó correctamente al PATH de Windows.

--Problemas comunes--

Si por alguna razón no te sale este mensaje puede deberse a varios factores. En primera instancia, te recomiendo reiniciar tu 
computadora, ya que a veces los cambios a la variable PATH suelen tomar efecto luego de un reinicio.

Si aun así no te funciona, revisa bien que hayas escrito correctamente la ruta dentro de tu variable PATH, y también revisa 
que dicha ruta exista, y que dentro de esa ruta exista un archivo llamado g++.exe. Si por alguna razón no encuentras la ruta 
o el archivo te recomiendo reinstalar el compilador y dejar la carpeta por defecto.











----------------------------------------------LINUX----------------------------------------------

A diferencia de Windows, el compilador de C++ viene instalado normalmente por defecto en la mayoría de sistemas operativos Linux.

Para verificar que tenemos instalado el compilador podemos ejecutar en la terminal el comando:   gcc -v 

En caso de que no te mostrara un resultado significa que no lo tienes instalado. Instalar el compilador es bastante sencillo, 
los comandos varían dependiendo el sistema operativo tengas instalado.

------------------------Ubuntu------------------------

sudo apt-get install g++

------------------------Fedora/RHEL------------------------

sudo dnf install gcc-c++










----------------------------------------------macOS----------------------------------------------

El compilador de C++ viene por defecto si ya hemos instalado las xcode command line tools, las herramientas de desarrollo de software de Apple.

Si ejecutamos el comando g++ --version en nuestra terminal debería imprimirnos el siguiente mensaje:

===== errormacOS.jpg

Si es así, puedes continuar instalando las extensiones de C++ en VSCode. De lo contrario, debemos instalar las xcode command line tools. Para 
ello debemos ejecutar el siguiente comando:

xcode-select --install

Te aparecerá un cuadro de diálogo al que debemos dar clic en instalar:


Notas:

    - Si no te aparece un cuadro de diálogo y se empieza a descargar en la terminal, no te alarmes, es normal. Se debe a la versión de macOS 
    que manejas.
    - La duración de la instalación varía dependiendo de tu conexión a internet y el procesador de tu equipo.

Una vez terminada la instalación, ejecutamos nuevamente el comando xcode-select --install en nuestra terminal y nos debería imprimir el siguiente mensaje:

===== errormacOS1.jpg