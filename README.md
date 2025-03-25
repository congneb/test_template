To set this repo as template:

![image](https://github.com/user-attachments/assets/7be95430-4d62-40ff-afd5-22e016780dbd)

## Syn the change from template repo
In the downstream (forked) repository, add the template repository as an additional remote:

    git remote add upstream https://github.com/owner/template-repo.git

Pull the latest changes from the template repository:

    git fetch upstream

Merge changes into your current branch:

    git merge upstream/main

Push the changes to your forked repository:

    git push origin main
