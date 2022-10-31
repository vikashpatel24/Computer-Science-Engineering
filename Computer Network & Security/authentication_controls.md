# Implementing Authentication Controls

Each network user and host device must be identified with an account so that you can control their access to your organization's applications, data, and services. The processes that support this requirement are referred to as identity and access management (IAM). Within IAM, authentication technologies ensure that only valid subjects (users or devices) can operate an account. Authentication requires the account holder to submit credentials that should only be known or held by them in order to access the account. There are many authentication technologies and it is imperative that you be able to compare and contrast and to implement these security controls.

## Identity and Access Management (IAM)

An access control system is the set of technical controls that govern how subjects may interact with objects. Subjects in this sense are users, devices, or software processes, or anything else that can request and be granted access to a resource. Objects are the resources; these could be networks, servers, databases, files, and so on. An identity and access management (IAM) system is usually described in terms of four main processes:

* Identification—creating an account or ID that uniquely represents the user, device, or process on the network.

* Authentication—proving that a subject is who or what it claims to be when it attempts to access the resource.

* Authorization—determining what rights subjects should have on each resource, and enforcing those rights.

* Accounting—tracking authorized usage of a resource or use of rights by a subject and alerting when unauthorized use is detected or attempted.

IAM enables you to define the attributes that make up an entity's identity, such as its purpose, function, security clearance, and more. These attributes subsequently enable access management systems to make informed decisions about whether to grant or deny an entity access, and if granted, decide what the entity has authorization to do.

## Authentication Factors

A user needs to present two or more factors to grand him or her access to a website or app, as well as to prove the legitimacy of his or her identity. There are several implementations of layered authentication to include two-factor authentication, multi-factor authentication, and two-step verification. There are several factors used in authenticating a user. Take note that they are categorized into three: knowledge factors, possession factors, and inherent factors. Collectively, these categories comprise the three types of authentication factors.

* Knowledge Factors: Something You Know 
  Knowledge factors are the most common factors used in user authentication. Also called “Something You Know,” they include registered usernames, passwords, and personal identification numbers or PINs. Other examples of these factors include security questions, as well as personal data such as mobile number and physical address.
  e.g. password, or a memorized PIN. 

* Possession Factors: Something You Have
  Based on physical objects, possession factors are also called “Something You Have.” Note that a key is a prime example of this factor. However, in digital communication, these factors include smart cards, device identities to include MAC and IP address of a smartphone or desktop computer, token devices, and external hardware based on solid-state storage.
  e.g. smartphone, or a secure USB key. 

* Inherent Factors: Something You Are
  Inherent factors are those associated with the biological identity of a user. Also known as “Something You Are,” these factors usually include biometric data and thus, utilize biometric methods such as fingerprints, voice recognition, retina and iris scans, and facial recognition.
  e.g. fingerprint, or facial recognition. 
  
## Authentication Design

Authentication design refers to selecting a technology that meets requirements for confidentiality, integrity, and availability:

* **Confidentiality**, in terms of authentication, is critical, because if account credentials are leaked, threat actors can impersonate the account holder and act on the system with whatever rights they have.

* **Integrity** means that the authentication mechanism is reliable and not easy for threat actors to bypass or trick with counterfeit credentials.

* **Availability** means that the time taken to authenticate does not impede workflows and is easy enough for users to operate.

## Multifactor Authentication

An authentication technology is considered strong if it combines the use of more than one type of knowledge, ownership, and biometric factor, and is called multifactor authentication (MFA). Single-factor authentication can quite easily be compromised: a password could be written down or shared, a smart card could be lost or stolen, and a biometric system could be subject to high error rates or spoofing.

Two-Factor Authentication (2FA) combines either an ownership-based smart card or biometric identifier with something you know, such as a password or PIN. Three-factor authentication combines all three technologies, or incorporates an additional attribute, such as location; for example, a smart card with integrated fingerprint reader. This means that to authenticate, the user must possess the card, the user's fingerprint must match the template stored on the card, and the user must input a PIN or password.

Multifactor authentication requires a combination of different technologies. For example, requiring a PIN along with date of birth may be stronger than entering a PIN alone, but it is not multifactor.

### How does multifactor authentication work?

Let's say you're going to sign into your work or school account, and you enter your username and password. If that's all you need then anybody who knows your username and password can sign in as you from anywhere in the world! 

But if you have multifactor authentication enabled, things get more interesting. The first time you sign in on a device or app you enter your username and password as usual, then you get prompted to enter your second factor to verify your identity.  

Perhaps you're using the free Microsoft Authenticator app as your second factor. You open the app on your smartphone, it shows you a unique, dynamically created 6-digit number that you type into the site and you're in. 

If somebody else tries to sign in as you, however, they'll enter your username and password, and when they get prompted for that second factor they're stuck! Unless they have YOUR smartphone, they have no way of getting that 6-digit number to enter. And the 6-digit number in Microsoft Authenticator changes every 30 seconds, so even if they knew the number you used to sign in yesterday, they're still locked out. 

## Kerberos

![image](https://user-images.githubusercontent.com/71202864/198912719-9a6a9310-2d86-43d6-a04a-6b0af93b2207.png)

Kerberos is a network authentication protocol. It is designed to provide strong authentication for client/server applications by using secret-key cryptography. A free implementation of this protocol is available from the Massachusetts Institute of Technology. Kerberos is available in many commercial products as well.

The Internet is an insecure place. Many of the protocols used in the Internet do not provide any security. Tools to "sniff" passwords off of the network are in common use by malicious hackers. Thus, applications which send an unencrypted password over the network are extremely vulnerable. Worse yet, other client/server applications rely on the client program to be "honest" about the identity of the user who is using it. Other applications rely on the client to restrict its activities to those which it is allowed to do, with no other enforcement by the server.

Some sites attempt to use firewalls to solve their network security problems. Unfortunately, firewalls assume that "the bad guys" are on the outside, which is often a very bad assumption. Most of the really damaging incidents of computer crime are carried out by insiders. Firewalls also have a significant disadvantage in that they restrict how your users can use the Internet. (After all, firewalls are simply a less extreme example of the dictum that there is nothing more secure than a computer which is not connected to the network and powered off!) In many places, these restrictions are simply unrealistic and unacceptable.

Kerberos was created by MIT as a solution to these network security problems. The Kerberos protocol uses strong cryptography so that a client can prove its identity to a server (and vice versa) across an insecure network connection. After a client and server has used Kerberos to prove their identity, they can also encrypt all of their communications to assure privacy and data integrity as they go about their business.

Kerberos is freely available from MIT, under copyright permissions very similar those used for the BSD operating system and the X Window System. MIT provides Kerberos in source form so that anyone who wishes to use it may look over the code for themselves and assure themselves that the code is trustworthy. In addition, for those who prefer to rely on a professionally supported product, Kerberos is available as a product from many different vendors.

In summary, Kerberos is a solution to your network security problems. It provides the tools of authentication and strong cryptography over the network to help you secure your information systems across your entire enterprise. We hope you find Kerberos as useful as it has been to us. At MIT, Kerberos has been invaluable to our Information/Technology architecture.

## Another Authentication Technique

### Password Authentication Protocol (PAP)

The Password Authentication Protocol (PAP) is an unsophisticated authentication method developed as part of the Point-to-Point Protocol (PPP), used to transfer TCP/IP data over serial or dial-up connections. It is also used as the basic authentication mechanism in HTTP. It relies on clear text password exchange and is therefore obsolete for most purposes, except through an encrypted tunnel.

### Challenge Handshake Authentication Protocol (CHAP)

The Challenge Handshake Authentication Protocol (CHAP) was also developed as part of PPP as a means of authenticating users over a remote link. CHAP relies on an encrypted challenge in a system called a three-way handshake.

1. Challenge—the server challenges the client, sending a randomly generated challenge message.

2. Response—the client responds with a hash calculated from the server challenge message and client password (or other shared secret).

3. Verification—the server performs its own hash using the password hash stored for the client. If it matches the response, then access is granted; otherwise, the connection is dropped.

The handshake is repeated with a different challenge message periodically during the connection (although transparent to the user). This guards against replay attacks, in which a previous session could be captured and reused to gain access.

# Sources

* [CompTIA Security+ (SY0-601)](https://www.comptia.org/training/books/security-sy0-601-study-guide)
* [Microsoft](https://support.microsoft.com/en-us/topic/what-is-multifactor-authentication-e5e39437-121c-be60-d123-eda06bddf661)
* [MIT-EDU](http://web.mit.edu/kerberos/)
* [KONSEYE](https://www.konsyse.com/articles/the-three-factors-of-user-authentication/)







