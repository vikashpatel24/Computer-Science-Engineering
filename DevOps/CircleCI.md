
## CircleCI ##

CircleCI is the continuous integration & delivery platform that helps the development teams to release code rapidly and automate the build, test, and deploy. 
CircleCI can be configured to run very complex pipelines efficiently with caching, docker layer caching, resource classes and many more. 
After repositories on GitHub or Bitbucket are authorized and added as a project to circleci.com, every code triggers CircleCI runs jobs. 
CircleCI also sends an email notification of success or failure after the tests complete.

CircleCI is used for building, testing, and deploying a project, by using automation. 
This automation takes place in pipelines with jobs.


These jobs include: 

A pipeline is a set of instructions or steps that our CI tool will execute each time our code is updated.
Jobs are a set of specific tasks for the building, testing and deploying stages. Each job is executed in a separate container or virtual machine.


As a developer using CircleCI you can:

SSH into any job to debug your build issues.
Set up parallelism in your .circleci/config.yml file to run jobs faster.
Configure caching with two simple keys to reuse data from previous jobs in your workflow.
Configure self-hosted runners for unique platform support.
Access Arm resources for the machine executor.
Use orbs, reusable packages of configuration, to integrate with third parties.
Use pre-built Docker images in a variety of languages.
Use the API
 to retrieve information about jobs and workflows.
Use the CLI to access advanced tools locally.
Get flaky test detection with test insights.
