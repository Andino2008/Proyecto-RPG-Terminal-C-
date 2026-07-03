# Proyecto 1 — Instrucciones de compilación

Este repositorio usa `g++` (MinGW) en Windows para compilar los archivos C++.

Pasos recomendados si la compilación falla por `g++` no encontrado:

1. Instalar MinGW-w64 (recomendado):
   - Descarga desde https://www.mingw-w64.org/ o usa MSYS2.

2. Añadir MinGW al `PATH` del sistema (ejemplo para MinGW instalado en `C:\\mingw64`):

```powershell
# Desde PowerShell (como administrador):
[Environment]::SetEnvironmentVariable("Path", $env:Path + ";C:\\mingw64\\bin", "Machine")
# Cierra y vuelve a abrir VS Code para que tome el nuevo PATH.
```

3. Verificar instalación y ruta:

```powershell
g++ --version
where g++
```

4. Uso en VS Code:
   - Las tareas de compilación incluidas usan `g++` por nombre. Si prefieres garantizar un compilador específico en este proyecto, puedes editar `.vscode/settings.json` y fijar `C_Cpp_Runner.cppCompilerPath` a la ruta completa (p. ej. `C:\\mingw64\\bin\\g++.exe`).
   - Recomendado: no commitear rutas absolutas si el repositorio se comparte con otros usuarios; documentar la dependencia en este `README.md`.

5. Si la carpeta `output/` no existe, créala antes de compilar:

```powershell
New-Item -ItemType Directory -Path .\\output -Force
```

6. Compilar desde VS Code (tarea): `Compilar y Ejecutar C++` o `Compilar C++ (Todos los archivos)`.

Si quieres, puedo actualizar `.vscode/settings.json` para apuntar a la ruta completa del compilador en tu máquina.
# Proyecto-RPG-Terminal-C-
