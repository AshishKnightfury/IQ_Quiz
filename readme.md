# IQ Quiz

A command line based quiz.

A screenshot:
![alt text][screenshot]

[screenshot]: ./screenshot.png "Screenshot of the app running on Ubuntu on WSL (Windows Terminal)"

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Prerequisites

```
> A modern C++ compiler
> Either Visual Studio 2019 (on Windows) or g++ compilers are recommended
```

The project and the solution files were made for Visual Studio 2019. However, the code is standard C++ and any compiler should work (tested on MSCV 2019 on Windows 10 and g++ on Ubuntu on WSL)

### Running

-   Clone the repo

```
git clone https://github.com/AshishKnightfury/IQ_Quiz.git
cd IQ_Quiz
```

#### Windows:

-   Open the solution file in Visual Studio
-   Right click and select 'build'. The executables are built in the `bin` directory
-   Run the compiled executable as `IQ_Quiz.exe -f <repo directory>\questions.json`

#### Linux:

-   Navigate to src folder `cd src`
-   Compile the code `g++ IQ_Quiz.cpp`
-   Run the output file `./a.out -f ./../questions.json`

_A sample list of questions is provided in `questions.json`. However, you can use your own questions using a JSON file in the same format. Keep in mind that the app in its current state only supports 4 options per question._

## How the repo is structured

-   `root` contains the `IQ_Quiz.sln` solution file, along with the readme and sub-directories
-   `bin` and `bin-int` stores the output binaries and intermediate files respectively
-   `IQ_Quiz` has the Visual Studio project files
-   `src` contains the actual source code in `.cpp` files

_This is how the repository is structured. Support for a build system like premake or cmake is planned, which will change the directory structure. In such case this file will be updated accordingly._

## Authors

_Initial work_ - [AshishKnightfury](https://github.com/AshishKnightfury)

See also the list of [contributors](https://github.com/AshishKnightfury/IQ_Quiz/contributors).
