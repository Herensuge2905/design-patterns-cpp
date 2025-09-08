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
1. El tipo de base de datos a usar se encuentra determinado por directivas de preprocesado que requieren de tiempo de 
compilación para ser evaluadas, por lo cual no hay manera en runtime de cambiar la DB usada.
2. Si se quiere agregar otra base de datos, hay que realizar modificaciones sobre las clases para  abilidad esta 
caracteristica.
3. No hay ninguna limitación que impida al usuario crea objetos de clases que no corresponden con la conección
requerida, teniendo elementos de SQL en lógica de oracle.
