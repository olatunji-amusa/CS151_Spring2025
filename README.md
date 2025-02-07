# **CS 151 - Introduction to Computing**


[Prerequisite Software for Local Developement](compiler.md)

## Getting Started
- Fork this repository to your own account by clicking the "Fork" button in the upper right corner of this page.
- Once you have forked the repository, you can clone it to your local machine or open it in GitHub Codespaces.
- Click the "Code" button and copy the URL under "Local" to clone the repository to your local machine.
- If you are using GitHub Codespaces, click the "Code" button and select "Create codespace on main."

## Cloning Your Repository to Your Local Machine (Skip if using GitHub Codespaces)
First time only.
- Open the terminal on your local machine.
- Go to the directory where you would to place the repository.
- Run the following commands:
```sh
git clone <repository-url>
code CS151_Spring2025
```

## Setting Up Your Environment
Open terminal in Visual Studio Code or Codespaces.
- **If you are using macOs, run the following command:**
```sh
cat rc.txt >> ~/.zshrc
source ~/.zshrc
```
- **If you are using Windows or Linux, run the following command:**
```sh
cat rc.txt >> ~/.bashrc
source ~/.bashrc
```
- Run the following command:
```sh
./setup.sh
```

## Editing Github Configuration
One time only:
- add your github username and email to the git configuration
```sh
git config --global user.name "github-username"
git config --global user.email github-email
```
## Helper Aliases
- mec: compiles and executes a C++ program
- workspace: prints the workspace root directory to the terminal
- gotoworkspace: goes to the workspace root directory
- g++: modifies the g++ command to include the -std=c++23 flag


## Committing Your Work
Saving your work to your repository:
```sh
gotoworkspace
git pull
git add .
git commit -m "<commit-message>"
git push
```
***OR***
```sh
gotoworkspace
./gpush.sh
```
You can pass a custom commit message after ./gpush.sh using the following command:
```sh
./gpush.sh "<commit-message>"
```

## Fetching Updates from the Original Repository
Whenever you want to update your repository with the latest changes from the original repository:
```sh
gotoworkspace
git fetch upstream
git merge upstream/main
```
***OR***
```sh
gotoworkspace
./gfetch.sh
```

## C++ Development
- Open the repository in Visual Studio Code.
- Open the terminal in Visual Studio Code.
- Run the following command to compile your C++ program:
```sh
g++ -o main main.cpp
```
- Run the following command to execute your C++ program:
```sh
./main
```
***OR***
- Run the following command to compile and execute your C++ program:
```sh
mec main.cpp
```

You can also install Code Runner in Visual Studio Code to compile and run your C++ program with a single click.
1. Click on the Extensions icon in the Activity Bar on the side of the window.
2. Search for "Code Runner" in the Extensions view search box.
3. Click on the Install button.
4. Click on the settings cog in the lower left corner of the window.
5. Click on Settings.
6. Search for "run in terminal."
7. Check the box for "Whether to run code in Integrated Terminal."
8. Open the C++ file you want to compile and run.


## Make Effective Choices (mec)
## Make Efficient Code (mec)
## Medgar Evers College (mec)




