# CS151_Spring2025

## Committing Your Work
Saving your work to your repository:
```sh
git add .
git commit -m "update message"
git push
```

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