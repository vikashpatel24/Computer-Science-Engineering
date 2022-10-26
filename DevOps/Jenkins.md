Jenkins: 
Jenkins is a devops tool that performs tests, listens for commits, generates reports and much more.

• Jenkins is a Java application (.war) • java –jar Jenkins.war • Jenkins will begin a service that will let
you connect to it via a web browser. • In the real world, the UI doesn’t need to be used since it’s irrelevant to Jenkin’s job
• Along side a REST API, we also have a Jenkins client that can connect to the server which can send CLI
commands.
• Default is localhost:8080
• Out of the box, Jenkins is useless, we must configure it before we can do anything.

Installing Jenkins
• Download the standalone .war

Continuous Integration:

• Test your application with every
change
• Detect failures as the arise

Continuous Deployment:

• Automate deployments
• Limit risk of human error
• git commit -m “a commit message”
• This should do everything

Types of Jenkins Pipeline
There are two types of Jenkins pipeline code.
1. Declarative Pipeline
2. Scripted Pipeline


we will focus only on the declarative syntax as it is an advanced version of the scripted pipeline with extensible features. Also,recommend using the declarative pipeline approach for all your Jenkins use
cases. There are a lot of features and benefits you will get from the declarative pipeline approach.

Now let’s get started with the pipeline tutorial.For better understanding, we will create a pipeline for the Java Spring Boot
application build using the declarative pipeline as code.

Prerequisites
1. Jenkins master (Check Jenkins installation steps)
2. Jenkins slave node connected to the master (Check Jenkins slave setup guide)
3. Access to Github.com from your Jenkins server. If you are trying out from your corporate Jenkins setup, you can use your organization’s
private git repo.

simple build pipeline we are going to build.
Here is the pipeline code for the above workflow. how to generate the DSLs in an easy way.
pipeline {
agent {
node {
label 'SLAVE01'
}
}
tools {
maven 'maven3'
}
options {
buildDiscarder logRotator(
daysToKeepStr: '15',
numToKeepStr: '10'
)
}
environment {
APP_NAME = "DCUBE_APP",
APP_ENV = "DEV"
}
stages {
stage('Cleanup Workspace') {
steps {
cleanWs()
sh """
echo "Cleaned Up Workspace for ${APP_NAME}"
"""
}
}
stage('Code Checkout') {
steps {
checkout([
$class: 'GitSCM',
branches: [[name: '*/master']],
userRemoteConfigs: [[url:
'https://github.com/spring-projects/spring-petclinic.git']]
])
}
}
stage('Code Build') {
steps {
sh 'mvn install -Dmaven.test.skip=true'
}
}
stage('Priting All Global Variables') {
steps {
sh """
env
"""
}
}
}
}

Job/Project - Refers to a runnable task that are controller / monitored by Jenkins

Build- Result of one run of a Project

Node/Slave - Slaves are computers that are set up to build projects for a master. Jenkins runs a separate
program called “slave agent” on slaves. The term node is used to refer to all machines that are
part of the Jenkins grid

Stable build - A build is stable if it was build successfully and no publisher reports it as unstable
Unstable build-  A build is unstable if it was build successfully and one or more publisher report it unstable. A
test publisher may report a project as unstable

Publisher - A publisher is part of the build process other than compilation for example, Junit test runs.

How to Generate Jenkins Pipeline
Scripts?
It is possible to generate Jenkins pipeline scripts? Yes! you can generate most of the pipeline scripts from Jenkins. Here is how
it works. Jenkins has its own pipeline script generator. You can access the generator on /pipeline-syntax path.
 http://<your-jenkins-ip>:port/pipeline-syntax/
  
You can also get the syntax generator path from your pipeline job configuration as shown below.
Snippet Generator:
  
Snippet generator is used for generating all the scripts that are using inside the stages.You can select the required option from the steps dropdown, fill in the required details and generate the script to use in
your pipeline.
  
  
Declarative Directive Generator
You can use the directive generator to generate all other options in the pipeline. For example, options, parameters, triggers, etc.
Here is an example of generating the agent block.
