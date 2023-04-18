# HowTo - Git

## Contents
1. Introduction
2. Terms and Definitions
3. Version control?
4. Time to Git gud!
    1. Getting Started
    2. They're cloners. Damn good ones too. - (git clone)
    3. Adding is putting together. - (git add)
    4. Mr. Scott, status report. - (git status)
    5. It is possible to commit no mistakes and still lose. - (git commit)
    6. Push it to the limit. - (git push)
    7. My god! Pull yourself together. - (git pull)
    8. And number 5 is Win/Win/Win - (merge conflicts)
5. Git'ing swole

## Introduction
Today we are going to learn about version control. There are many version control systems, but we
will be focusing on *git*. We will start by going over some terms and definitions to makes sure we
all are using the same dictionary and hopefully reduce confusion. Next we will take a look at what
version control is, some options, and why we should use it. With that basic information, it is now
time to Git Gud! This section will cover the common commands as well as a brief bit on conflicts.
Lastly we will discuss Git'ing swole with LFS.

## Terms and Definitions
- **version control** - a method of maintaining a history of changes to source code
- **git** - a distributed version control system
- **repository** - a storage location that holds the metadata and files for a version controlled project
- **remote** - a storage location that is on a separate system
- **checkout** - a local copy of the remote repository
- **branch** - a temporary split from the main line of commits within a repository
- **commit** - a change or set of changes pushed to a branch that has a commit hash as an id
- **commit hash** - a number generated from the file states
- **head** - the most recent commit hash on the main branch
- **pull request** - Notification to others that work with the repository that you have made changes
                and are asking that they pull your changes into their checkout. Often referred
                to as a PR

## Version Control?
Version control is a method of maintaining a history of changes to source code. Sometimes you may
hear it referred to as "revision control," "source control," or "source code management." Each
change within a versio control system typically has a revision number associated with it to act as
a way of providing order to said changes.

A very simple version control system is simply to make a copy of the files you change. Let's say
you have a file "file\_1.txt" that you regularly change and you would feel really bad if you lost
it. So you make a copy of the file and name it "file\_1.txt.r1" as a back up. Now you have two
versions of your file: (file\_1.txt, file\_1.txt.r1). You do this over and over with each change.
The draw back here is you could start using a lot of space on your drive and this isn't all that
easy to maintain when you are working on a large project. Another issue is this method doesn't
really work when you have more than one person working on a project. More people working on stuff
introduces a number of other issues.

These problems have been addressed by version control systems, for the most part. There are many
tools that can be used such as CVS, SVN, Mercurial, Git. Those are just a few but there are plenty
more. We are going to be focused on Git. Coming up we will discuss how Git addresses some of these
more tricky areas.

Version Control lets you:
  - track file changes
  - enable multiple people to work with files at the same time
  - merge changes from different people into the same file
  - enable easier recovery

## Time to Git gud!
Wikipedia describes Git as a distributed version control system that tracks changes in a any set
of computer files. Originally developed by Linus Torvalds and first released in 2005.

Q1. How does it have multiple copies of each changed file?
A1. Nope, it stores only the changes to a file.

Q2. How does it handle naming collisions?
A1. It does and doesn't. It uses a 'commit hash' which is a cryptographic hash based off of the
    entire history of the file development. This means that someone isn't able to made
    modifications to a past version without it being noticed.

Q3. So multiple people are working on the same file, how are those changes combined by each
    person locally?
A3. Nope git handles that for you. Each file is chunked into blocks and as long as changes from
    different users are made in different blocks the differences are merged into the file without
    issue. When there are changes in the same block, this may cause a *merge conflict* and that
    is something that would need to be handled manually. More on this later.

### Git'ing Started

### They're cloners. Damn good ones too.

### Adding is putting together.

### Mr. Scott, status report.

### It is possible to commit no mistakes and still lose.

### Push it to the limit.

### My god! Pull yourself together.

### And number 5 is win/win/win

## Git'ing swole!
