# IQ Quiz

A command line based quiz.

A screenshot:
![alt text][screenshot]

[screenshot]: ./screenshot.png "Screenshot of the app"

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Prerequisites

```
> A modern C++ compiler
> Visual Studio 2019 (comes with MSVC Compiler as part of the Desktop Development for C++ module)
```

The project and the solution files were made for Visual Studio 2019. However, the code is standard C++ and any compiler should work.

### Running

-   Clone the repo

```
git clone https://github.com/AshishKnightfury/IQ_Quiz.git
cd IQ_Quiz
```

-   Open the solution file in Visual Studio
-   Right click and select 'build'. The executables are built in the `bin` directory
-   Run the compiled executable

## How the repo is structured

-   `root` contains the `IQ_Quiz.sln` solution file, along with the readme and sub-directories
-   `bin` and `bin-int` stores the output binaries and intermediate files respectively
-   `IQ_Quiz` has the Visual Studio project files
-   `src` contains the actual source code in `.cpp` files

_This is how the repository is structured. Support for a build system like premake or cmake is planned, which will change the directory structure. In such case this file will be updated accordingly._

## Authors

_Initial work_ - [AshishKnightfury](https://github.com/AshishKnightfury)

See also the list of [contributors](https://github.com/your/project/contributors).
