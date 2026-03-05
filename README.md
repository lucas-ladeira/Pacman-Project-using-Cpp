# Pacman Project in C++

Project based on the classic Pacman game, developed in **C++ with SFML** for a course in my bachelor's degree.

---

## Requirements

### Compiler

- **Linux**: `g++` (GCC ≥ 5) with C++14 support
- **Windows**: [MinGW-w64](https://www.mingw-w64.org/) via [MSYS2](https://www.msys2.org/) with `g++` and `make`

### SFML Library (Simple and Fast Multimedia Library)

| Platform | Recommended Version                         |
| -------- | ------------------------------------------- |
| Linux    | SFML 2.x (via package manager)              |
| Windows  | SFML 2.x (via MSYS2 or manual installation) |

---

## Linux - Installation & Setup

### 1. Install dependencies

**Ubuntu / Debian:**

```bash
sudo apt update
sudo apt install g++ make libsfml-dev libpng-dev
```

**Fedora / RHEL:**

```bash
sudo dnf install gcc-c++ make SFML-devel libpng-devel
```

**Arch Linux:**

```bash
sudo pacman -S gcc make sfml libpng
```

### 2. Clone the repository

```bash
git clone https://github.com/lucas-ladeira/Pacman-Project-using-Cpp.git
cd Pacman-Project-using-Cpp
```

### 3. Build and run

```bash
# Build
make

# Build and run
make run

# Clean compiled files
make clean
```

The generated executable is `./pacman`.

---

## Windows - Installation & Setup

The recommended environment on Windows is **MSYS2**, which provides the MinGW-w64 compiler and `make` in a straightforward way.

### 1. Install MSYS2

1. Go to [https://www.msys2.org/](https://www.msys2.org/) and download the installer.
2. Run the installer and follow the on-screen instructions.
3. When finished, the **MSYS2 UCRT64** terminal will open automatically.

### 2. Update base packages

In the MSYS2 terminal, run:

```bash
pacman -Syu
```

> If the terminal closes, reopen it from the Start Menu as **MSYS2 UCRT64** and repeat the command until there are no more updates.

### 3. Install dependencies

```bash
pacman -S mingw-w64-ucrt-x86_64-gcc \
          mingw-w64-ucrt-x86_64-make \
          mingw-w64-ucrt-x86_64-sfml \
          mingw-w64-ucrt-x86_64-libpng
```

### 4. Clone the repository

```bash
git clone https://github.com/lucas-ladeira/Pacman-Project-using-Cpp.git
cd Pacman-Project-using-Cpp
```

> **Tip:** Always use the **MSYS2 UCRT64** terminal for all commands below.

### 5. Build and run

```bash
# Build
mingw32-make

# Build and run
mingw32-make run

# Clean compiled files
mingw32-make clean
```

The generated executable is `pacman.exe`.

---

## Project Structure

```
Pacman-Project-using-Cpp/
├── src/          # Source files (.cc)
├── include/      # Header files (.h)
├── bin/          # Compiled objects (.o) — generated automatically
├── sprites/      # Game graphic assets
├── Makefile      # Cross-platform (Linux & Windows)
└── README.md
```

---

## Makefile Commands

| Command                             | Description                    |
| ----------------------------------- | ------------------------------ |
| `make` / `mingw32-make`             | Compiles the project           |
| `make run` / `mingw32-make run`     | Compiles and runs the game     |
| `make clean` / `mingw32-make clean` | Removes generated binary files |

---

## Common Issues

### `sfml-graphics` or `sfml-window` not found

Make sure SFML is correctly installed for your environment:

- **Linux:** `sudo apt install libsfml-dev`
- **Windows (MSYS2):** `pacman -S mingw-w64-ucrt-x86_64-sfml`

### On Windows: `make: command not found`

Use `mingw32-make` instead of `make` in MSYS2, or add `C:\msys64\ucrt64\bin` to the system PATH.

### The game opens but closes immediately

Make sure the `sprites/` folder is present in the same directory as the executable.

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
