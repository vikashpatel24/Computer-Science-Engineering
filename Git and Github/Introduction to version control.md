## Introduction to version control
A version Control system is a system that maintains different versions of your project when we work in a team or as an individual. (system managing changes to files) As the project progresses, new features get added to it. So, a version control system maintains all the different versions of your project for you and you can roll back to any version you want without causing any trouble to you for maintaining different versions by giving names to it like MyProject, MyProjectWithFeature1, etc.

## Distributed Version
Distributed Version control system means every collaborator(any developer working on a team project)has a local repository of the project in his/her local machine unlike central where team members should have an internet connection to every time update their work to the main central repository.

**Git is a distributed version control system**.
## Git Repository Structure
**It consists of 4 parts:**  

- **Working directory:** This is your local directory where you make the project (write code) and make changes to it.
- **Staging Area (or index):** this is an area where you first need to put your project before committing. This is used for code review by other team members.
- **Local Repository**: this is your local repository where you commit changes to the project before pushing them to the central repository on Github. This is what is provided by the distributed version control system. This corresponds to the .git folder in our directory.
- **Central Repository**: This is the main project on the central server, a copy of which is with every team member as a local repository.

## Github
- Github basically is a for-profit company owned by Microsoft, which hosts Git repositories online. 
- It helps users share their git repository online, with other users, or access it remotely. 
- You can also host a public repository for free on Github. 
- User share their repository online for various reasons including but not limited to project deployment, project sharing, open source contribution, helping out the community and many such.

## Git Important commands
- **Git user configuration**
```
git --version (to check git version)
git config --global user.name "your name here"
git config --global user.email "your email here"
```

- **git init** command is used to  initialize directory. initializes your directory to work with git .
```
git init
```
- **git clone** is primarily used to point to an existing repo and make a clone or copy of that repo at in a new directory, at another location. for example
```
git clone ssh://john@example.com/path/to/my-project.git
```

- **git status**  command is used to check if there are any changes like modification , addition or deletion of any files done.
``` git status ```

- **git add**  command adds a change in the working directory to the staging area.
```
git add .   // dot means everything in current directory

git  add names.txt  // to add individual files into project

```
- **git commit** command  captures a snapshot of the project's currently staged changes. Committed snapshots can be thought of as “safe” versions of a project—Git will never change them unless you explicitly ask it to.
```
git commit names.txt -m "a meaning full message"
git commit * -m "a meaning full message" // '*' basically commit all the files and directory present in staging area.
```

- **git log** command is used to see the entire history of the project. This will display the author and the time at which the commit was made.
```
git log
```

## To remove a commit from the history of a project.
- Each commit has an id and commits are build on top of each other . we can unstage or remove commits. 
Copy the commit id which you want to remove and using this command the commit get removed.
``` 
git reset copied_commit_id
```


## Connecting REMOTE REPOSITORY To Local REPO
To connect the local repo with remote repository 
- create a new repo on github and copy the url
- attach that url in your local project
```
git remote add origin https://github.com/newRepo

git remote -v   /// this will show all the url attached to the folder.

git push origin master  // command to push the changes to the remote repo
```

## Create a new branch

**Branch** : A branch represents an independent line of development. Branches serve as an abstraction for the edit/stage/commit process. You can think of them as a way to request a brand new working directory, staging area, and project history.
```
git branch // list all of the branches in your repository.

git branch <branch_name> // crate a new branch called <branch_name>


git branch -D <branch>  // force delete the specified branch , even if it has unmerged changes.

git branch -m <branch>  // rename the current branch to <branch>

git branch -a    // list all remote branches


```
## Fork
Forking creates a clone in our account and now we can do anything we want with it. This will not affect the original repo until changes not merged into it.

## Pull request 
Pull requests let you tell others about changes you've pushed to a branch in a repository on GitHub. Once a pull request is opened, you can discuss and review the potential changes with collaborators and add follow-up commits before your changes are merged into the base branch.




