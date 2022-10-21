##Kubernetes Introduction
```
Kubernetes is an open-source container orchestration platform that automates the deployment, management, scaling, and networking of containers.

It was developed by Google using the Go Programming Language, and this amazing technology has been open-source since 2014.
```

## minikube commands

```
minikube start
minikube dashboard
minikube stop
```


## Accessing minikube

```
kubectl config view
kubectl cluster-info
kubectl proxy
# This opens a proxy to kubernetes REST API
curl http://localhost:8081/
# Get the token
TOKEN=$(kubectl describe secret $(kubectl get secrets | grep default | cut -f1 -d ' ') | grep -E '^token' | cut -f2 -d':' | tr -d '\t')
# Get the API server endpoint
APISERVER=$(kubectl config view | grep https | cut -f 2- -d ":" | tr -d " ")
# Access the API Server using the endpoint and credentials
curl $APISERVER --header "Authorization: Bearer $TOKEN" --insecure
```

## Pods

A [Pod](https://kubernetes.io/docs/concepts/workloads/pods/pod-overview/) is the smallest and simplest Kubernetes object. It is the unit of deployment in Kubernetes, which represents a single instance of the application. A Pod is a logical collection of one or more containers, which:

* Are scheduled together on the same host
* Share the same network namespace
* Mount the same external storage (Volumes).


![pod](https://d37djvu3ytnwxt.cloudfront.net/assets/courseware/v1/7e115582907db7c7f5edde0d13fc0cd5/asset-v1:LinuxFoundationX+LFS158x+2T2017+type@asset+block/pods.jpg)

Pods are ephemeral in nature, and they do not have the capability to self-heal by themselves. That is why we use them with controllers, which can handle a Pod's replication, fault tolerance, self-heal, etc. Examples of controllers are Deployments, ReplicaSets, ReplicationControllers, etc. We attach the Pod's specification to other objects using Pod Templates, as we have seen in the previous section.
