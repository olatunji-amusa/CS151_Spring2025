# CS151_Spring2025

## Getting Started
- Fork this repository to your own account by clicking the "Fork" button in the upper right corner of this page.
- Once you have forked the repository, you can clone it to your local machine or open it in GitHub Codespaces.
- Click the "Code" button and copy the URL under "Local" to clone the repository to your local machine.
- If you are using GitHub Codespaces, click the "Code" button and select "Create codespace on main."

## Cloning Your Repository
First time only.
- Open the terminal on your local machine.
- Go to the directory where you want to clone the repository.
- Run the following commands:
```sh
git clone <repository-url>
code CS151_Spring2025
```
- Open terminal in Visual Studio Code
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


## Committing Your Work
Saving your work to your repository:
```sh
git pull
git add .
git commit -m "<commit-message>"
git push
```
OR
```sh
./gpush.sh 
'''

## Fetching Updates from the Original Repository
First time only:
```sh
git remote add upstream https://github.com/Jonathan-Skeete/CS151_Spring2025.git
```
Whenever you want to update your repository:
```sh
git fetch upstream
git merge upstream/main
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

You can also install Code Runner in Visual Studio Code to compile and run your C++ program with a single click.
- Click the Extensions icon in the Activity Bar on the side of the window.
- Search for "Code Runner" in the Extensions view search box.
- Click the Install button for "Code Runner" by Jun Han.
- Go to: Settings (gear icon bottom left) > Settings.
- Search run in terminal and check the box for Code-runner: Run In Terminal.
- Open the C++ file you want to run.
- Right-click in the editor and select Run Code or click the play button in the top right corner of the editor.
- You can also use the keyboard shortcut Ctrl+Alt+N (Cmd+Option+N on MacOs) to run the code. 
