## COmpilación

Para poder compilar los archivos se debe agregar el archivo CMakelists.txt.

Luego se crea la carpeta build
```cmd
mkdir build
```

Se buildea el proyecto de modo clásico. y se compila con minGW32-make, un make para windows que se encuentra en MinGw

```cmd
cd build
cmake .. -G "MinGW Makefiles"
minGW32-make
```

## Problemas

Los problemas con esta  implementación radican en
1. Si bien ya no se pueden crear directamente objetos incorrectos, si se puede asignar una base de datos diferentes a 
las conexiones y a los comandos, siendo esto problemático
