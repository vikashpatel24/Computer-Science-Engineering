# Threat Actor Types and Attack Vectors

Classifying and evaluating the capabilities of threat actor types enables you to assess and mitigate risks more effectively. Understanding the methods by which threat actors infiltrate networks and systems is essential for you to assess the attack surface of your networks and deploy controls to block attack vectors. As part of security assessment and monitoring, security teams must identify ways in which their systems could be attacked. These assessments involve vulnerabilities, threats, and risk:

## What is a vulnerability

A vulnerability is a weakness that could be triggered accidentally or exploited intentionally to cause a security breach. It refers to a known weakness of an asset (resource) that can be exploited by one or more attackers. In other words, it is a known issue that allows an attack to succeed.

For example, when a team member resigns and you forget to disable their access to external accounts, change logins, or remove their names from company credit cards, this leaves your business open to both intentional and unintentional threats. However, most vulnerabilities are exploited by automated attackers and not a human typing on the other side of the network.

## What is a threat?

A threat is the potential for someone or something to exploit a vulnerability and breach security. It refers to a new or newly discovered incident that has the potential to harm a system or your company overall. There are three main types of threats:

* Natural threats, such as floods, hurricanes, or tornadoes
* Unintentional threats, like an employee mistakenly accessing the wrong information
* Intentional threats, such as spyware, malware, adware companies, or the actions of a disgruntled employee

The person or thing that poses the threat is called a threat actor or threat agent. The path or tool used by a malicious threat actor can be referred to as the attack vector. Worms and viruses are categorized as threats because they could cause harm to your organization through exposure to an automated attack, as opposed to one perpetrated by humans. 

## What is a risk?

Risk is the likelihood and impact (or consequence) of a threat actor exploiting a vulnerability. It defined as the potential for loss or damage when a threat exploits a vulnerability. Examples of risk include:

* Financial losses
* Loss of privacy
* Damage to your reputation Rep
* Legal implications
* Even loss of life
* Risk can also be defined as:

The forumlas of risk can be written as below.

```
Risk = Threat x Vulnerability
```

The image below, probably could help you understand more about threats, vulnerabilities, and risk.

![threat-risk](https://user-images.githubusercontent.com/71202864/196146616-0dce8de6-2722-43e7-a2d8-b139b9f7569c.png)

# Attributes of Threat Actors

Historically, cybersecurity techniques were highly dependent on the identification of "static" known threats, such as viruses or rootkits, Trojans, botnets, and specific software vulnerabilities. It is relatively straightforward to identify and scan for these types of threats with automated software. Unfortunately, adversaries were able to develop means of circumventing this type of signature-based scanning. The sophisticated nature of modern cybersecurity threats means that it is important to be able to describe and analyze behaviors. This analysis involves identifying the attributes of threat actors in terms of location, intent, and capability.

## Internal/External
An external threat actor or agent is one that has no account or authorized access to the target system. A malicious external threat must infiltrate the security system using malware and/or social engineering. Note that an external actor may perpetrate an attack remotely or on-premises (by breaking into the company's headquarters, for instance). It is the threat actor that is defined as external, rather than the attack method.

## Intent/Motivation
Intent describes what an attacker hopes to achieve from the attack, while motivation is the attacker's reason for perpetrating the attack. A malicious threat actor could be motivated by greed, curiosity, or some sort of grievance, for instance. The intent could be to vandalize and disrupt a system or to steal something. Threats can be characterized as structured or unstructured (or targeted versus opportunistic) depending on the degree to which your own organization is targeted specifically. For example, a criminal gang attempting to steal customers' financial data is a structured, targeted threat; a script kiddie launching some variant on the "I Love You" email worm is an unstructured, opportunistic threat.

## Level of Sophistication/Capability and Resources/Funding
You must also consider the sophistication and level of resources/funding that different adversaries might possess. Capability refers to a threat actor's ability to craft novel exploit techniques and tools. The least capable threat actor relies on commodity attack tools that are widely available on the web or dark web. More capable actors can fashion zero-day exploits in operating systems, applications software, and embedded control systems. At the highest level, a threat actor might make use of non-cyber tools, such as political or military assets. Capability is only funded through a substantial budget. Sophisticated threat actor groups need to be able to acquire resources, such as customized attack tools and skilled strategists, designers, coders, hackers, and social engineers. The most capable threat actor groups receive funding from nation states and criminal syndicates.

# Hackers, Script Kiddies, and Hacktivists

## Hackers
Hacker describes an individual who has the skills to gain access to computer systems through unauthorized or unapproved means. Originally, hacker was a neutral term for a user who excelled at computer programming and computer system administration. Hacking into a system was a sign of technical skill and creativity that gradually became associated with illegal or malicious system intrusions. The terms black hat (unauthorized) and white hat (authorized) are used to distinguish these motivations. Of course, between black and white lie some shades of gray. A gray hat hacker (semi-authorized) might try to find vulnerabilities in a product or network without seeking the approval of the owner; but they might not try to exploit any vulnerabilities they find. A gray hat might seek voluntary compensation of some sort (a bug bounty), but will not use an exploit as extortion. A white hat hacker always seeks authorization to perform penetration testing of private and proprietary systems.

## Script Kiddies
Script kiddie is a derogative term that computer hackers coined to refer to immature, but often just as dangerous, exploiters of internet security weaknesses. A script kiddie is someone who uses hacker tools without necessarily understanding how they work or having the ability to craft new attacks. Script kiddie attacks might have no specific target or any reasonable goal other than gaining attention or proving technical abilities.

## Hacker Teams and Hacktivists
The historical image of a hacker is that of a loner, acting as an individual with few resources or funding. While any such "lone hacker" remains a threat that must be accounted for, threat actors are now likely to work as part of some sort of team or group. The collaborative team effort means that these types of threat actors are able to develop sophisticated tools and novel strategies.

# Hackers vs Script Kiddies

Hackers and script kiddies differ in three areas:

1. **Level of experience.** 
Script kiddies are less experienced with cybersecurity exploits than real hackers. They generally cannot write exploits or scripts on their own, so they use programs written by other people and found on the internet.

2. **Skills.** Script kiddies have less developed hacking skills than more advanced, well-organized threat actors. As a result, they often use attacks that are easier to perform. They may prepare less for an attack, doing little research before launching it. They are also more likely to give up if their easy exploit doesn't work in the first few tries. Experienced hackers have the programming and computer networking knowledge to adapt their attacks to dynamic internet security defenses. They can interpret a situation and adapt to new scenarios.

3. **Intent.** Script kiddies are more likely to perform exploits for personal acclaim or to troll. They don't always understand the tools they use and pay less attention to the consequences of hacking. A hacker will take pride in the quality of an attack, such as leaving no trace of an intrusion, for example. Most experienced threat attackers understand the consequences and ethics of what they do. By comparison, a script kiddie often focuses on quantity, seeing the number of attacks that can be mounted to get attention and notoriety.

# Insider Threat Actors

Many threat actors operate externally from the networks they target. An external actor has to break into the system without having been granted any legitimate permissions. An insider threat arises from an actor who has been identified by the organization and granted some sort of access. Within this group of internal threats, you can distinguish insiders with permanent privileges, such as employees, from insiders with temporary privileges, such as contractors and guests. 

CERT identifies the main motivators for malicious insider threats as sabotage, financial gain, and business advantage. Like external threats, insider threats can be opportunistic or targeted. Again, the key point here is to identify likely motivations, such as employees who might harbor grievances or those likely to perpetrate fraud. An employee who plans and executes a campaign to modify invoices and divert funds is launching a structured attack; an employee who tries to guess the password on the salary database a couple of times, having noticed that the file is available on the network, is perpetrating an opportunistic attack. You must also assess the possibility that an insider threat may be working in collaboration with an external threat actor or group.

# Attack Surface and Attack Vectors

## Attack Surface

The **attack surface** comprises the organizational assets that a hacker can exploit to gain entry to your systems. For many companies, that surface can be huge and includes physical, digital, and human assets.

1. Physical Attack Surface
The physical attack surface of your organization is its four walls—offices, data centers, or a server room. Once an attacker gains entry to a building or space, they can carry out malicious cyber activity on a device. This method is typically exploited by disgruntled employees, intruders, or perpetrators of social engineering attacks.

2. Digital Attack Surface
The digital attack surface encompasses any digital assets accessible via the internet, such as servers, databases, cloud instances, remote machines, shadow IT, and more. It also includes any third-party vendors that handle sensitive data. 

3. Human Attack Surface
Your organization’s employees are its weakest link and the most vulnerable attack surface. Typically, threat actors exploit this weakness through social engineering attacks such as phishing, smishing, and vishing.

## Attack Vector

An **attack vector** is a method that a hacker uses to penetrate the attack surface and takes many forms, including ransomware, compromised credentials, phishing, and malware.

1. Malware

> Malware is a term for any form of software, including ransomware or a Trojan horse, that looks like a legitimate file but executes malicious code when the user opens or downloads it. 

2. Ransomware

> Ransomware is a form of malware that encrypts data on a victim’s computer and blocks the owner from accessing it in exchange for a ransom. Once payment is received, access to the data is restored.

3. Misconfigured Systems

> The misconfiguration of systems, particularly in the cloud, is a leading cause of data breaches and data loss. The massive Capital One data breach, for example, was the result of a misconfigured web application firewall. 

4. Unpatched Systems

> New vulnerabilities arise every day and if you don’t monitor for unpatched systems or apply a patch expeditiously, hackers will easily exploit them. Indeed, BitSight’s researchers found that organizations with a patching cadence of D or F were more than seven times more likely to experience a ransomware event compared to those with an A grade.

5. Compromised Credentials

> Compromised usernames and passwords are widely available on the dark web and can give hackers unprecedented access to your network. Consider investing in tools that monitor for exposed credentials resulting from publicly disclosed breaches so that you can act quickly.

6. Phishing

> Phishing is a form of social engineering that occurs when a bad actor impersonates a legitimate person or organization—typically via email—and asks the recipient to take an action that would give the phisher access to critical data or systems. 

# Sources

* [CompTIA Security+ (SY0-601)](https://www.comptia.org/training/books/security-sy0-601-study-guide)
* [TechTarget](https://www.techtarget.com/searchsecurity/definition/script-kiddy-or-script-kiddie)
* [BMCBlogs](https://www.bmc.com/blogs/security-vulnerability-vs-threat-vs-risk-whats-difference/)
* [BITSIGHT](https://www.bitsight.com/blog/attack-vector-vs-attack-surface-what-difference)
