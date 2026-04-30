# 📑 Clase: Introducción a la Línea de Comandos

En esta guía aprenderemos a movernos por las carpetas del sistema y a compilar programas en C++ usando la terminal.

---

## 1. Comandos Básicos (Comparativa)

| Acción                      | Comando en **CMD** | Comando en **PowerShell** |
| :-------------------------- | :----------------- | :------------------------ |
| **Limpiar la pantalla**     | `cls`              | `clear`                   |
| **Ver archivos y carpetas** | `dir`              | `ls`                      |
| **Entrar a una carpeta**    | `cd nombre`        | `cd nombre`               |
| **Volver atrás (subir)**    | `cd ..`            | `cd ..`                   |

---

## 2. Ejemplos de Navegación (Paso a paso)

Para entender mejor el uso de cómo moverse entre carpetas, usaremos este ejemplo:

### A. Entrar en carpetas

Si estamos en la carpeta principal y queremos entrar a la carpeta de la materia:

```cmd
C:\Usuarios\Estudiante> cd Documentos
C:\Usuarios\Estudiante\Documentos> cd Programacion
C:\Usuarios\Estudiante\Documentos\Programacion>
```

### B. Salir de carpetas (Volver atrás)

```cmd
C:\Usuarios\Estudiante\Documentos\Programacion> cd ..
C:\Usuarios\Estudiante\Documentos>
```

El comando cd .. nos saca de la carpeta actual y nos sube un nivel.

### Compilación y Ejecución de C++

```cmd
g++ -o ejecutable.exe programa.cpp
```

### Correr el programa en CMD

```cmd
ejecutable.exe
```

### Correr el programa PowerShell

```pwsh
.\ejecutable.exe
```

### Tips

```
Flechas arriba/abajo: Úsalas para ver los comandos que ya escribiste antes sin tener que volver a teclearlos.
```
