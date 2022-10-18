# What's Threat Intelligence 

Threat intelligence is data that is collected, processed, and analyzed to understand a threat actor’s motives, targets, and attack behaviors. Threat intelligence enables us to make faster, more informed, data-backed security decisions and change their behavior from reactive to proactive in the fight against threat actors.

# Threat Research Sources

Threat research is a counterintelligence gathering effort in which security companies and researchers attempt to discover the tactics, techniques, and procedures (TTPs) of modern cyber adversaries. There are many companies and academic institutions engaged in primary cybersecurity research. Security solution providers with firewall and anti-malware platforms derive a lot of data from their own customers' networks. As they assist customers with cybersecurity operations, they are able to analyze and publicize TTPs and their indicators. These organizations also operate honeynets to try to observe how hackers interact with vulnerable systems.

Another primary source of threat intelligence is the dark web. The deep web is any part of the World Wide Web that is not indexed by a search engine. This includes pages that require registration, pages that block search indexing, unlinked pages, pages using nonstandard DNS, and content encoded in a nonstandard manner. Within the deep web, are areas that are deliberately concealed from "regular" browser access.

* **Dark net**—a network established as an overlay to Internet infrastructure by software, such as The Onion Router (TOR), Freenet, or I2P, that acts to anonymize usage and prevent a third party from knowing about the existence of the network or analyzing any activity taking place over the network. Onion routing, for instance, uses multiple layers of encryption and relays between nodes to achieve this anonymity.

* **Dark web**—sites, content, and services accessible only over a dark net. While there are dark web search engines, many sites are hidden from them. Access to a dark web site via its URL is often only available via "word of mouth" bulletin boards.

# Threat Intelligence Lifecycle

The intelligence lifecycle is a process to transform raw data into finished intelligence for decision making and action. You will see many slightly different versions of the intelligence cycle in your research, but the goal is the same, to guide a cybersecurity team through the development and execution of an effective threat intelligence program.

Threat intelligence is challenging because threats are constantly evolving – requiring businesses to quickly adapt and take decisive action. The intelligence cycle provides a framework to enable teams to optimize their resources and effectively respond to the modern threat landscape. This cycle consists of six steps resulting in a feedback loop to encourage continuous improvement:

1. **Requirements**
The requirements stage is crucial to the threat intelligence lifecycle because it sets the roadmap for a specific threat intelligence operation. During this planning stage, the team will agree on the goals and methodology of their intelligence program based on the needs of the stakeholders involved. 

2. **Collection**
Once the requirements are defined, the team then sets out to collect the information required to satisfy those objectives. Depending on the goals, the team will usually seek out traffic logs, publicly available data sources, relevant forums, social media, and industry or subject matter experts.

3. **Processing**
After the raw data has been collected, it will have to be processed into a format suitable for analysis. Most of the time, this entails organizing data points into spreadsheets, decrypting files, translating information from foreign sources, and evaluating the data for relevance and reliability.

4. **Analysis**
Once the dataset has been processed, the team must then conduct a thorough analysis to find answers to the questions posed in the requirements phase. During the analysis phase, the team also works to decipher the dataset into action items and valuable recommendations for the stakeholders.

5. **Dissemination**
The dissemination phase requires the threat intelligence team to translate their analysis into a digestible format and present the results to the stakeholders. How the analysis is presented depends on the audience. In most cases the recommendations should be presented concisely, without confusing technical jargon, either in a one-page report or a short slide deck.

6. **Feedback**
The final stage of the threat intelligence lifecycle involves getting feedback on the provided report to determine whether adjustments need to be made for future threat intelligence operations. Stakeholders may have changes to their priorities, the cadence at which they wish to receive intelligence reports, or how data should be disseminated or presented.

# Threat Intelligence Providers

Threat data can be packaged as feeds that integrate with a security information and event management (SIEM) platform. These feeds are usually described as cyber threat intelligence (CTI) data. The data on its own is not a complete security solution however. To produce actionable intelligence, the threat data must be correlated with observed data from customer networks. This type of analysis is often powered by artificial intelligence (AI) features of the SIEM. hreat intelligence platforms and feeds are supplied as one of three different commercial models:

* **Closed/proprietary**—the threat research and CTI data is made available as a paid subscription to a commercial threat intelligence platform. The security solution provider will also make the most valuable research available early to platform subscribers in the form of blogs, white papers, and webinars. Some examples of such platforms include:

  * [IBM X-Force Exchange](exchange.xforce.ibmcloud.com)
  * [FireEye](fireeye.com/solutions/cyber-threat-intelligence/threat-intelligence-subscriptions.html)
  * [Recorded Future](recordedfuture.com/solutions/threat-intelligence-feeds)

* **Vendor websites**—proprietary threat intelligence is not always provided at cost. All types of security, hardware, and software vendors make huge amounts of threat research available via their websites as a general benefit to their customers. One example is Microsoft's Security Intelligence [blog](microsoft.com/security/blog/microsoft-security-intelligence).

* **Public/private information sharing centers**—in many critical industries, [Information Sharing and Analysis Centers (ISACs)](nationalisacs.org/member-isacs) have been set up to share threat intelligence and promote best practice. These are sector-specific resources for companies and agencies working in critical industries, such as power supply, financial markets, or aviation. Where there is no coverage by an ISAC, local industry groups and associations may come together to provide mutual support.

* **Open source intelligence (OSINT)**—some companies operate threat intelligence services on an open-source basis, earning income from consultancy rather than directly from the platform or research effort. Some examples include:
  * [AT&T Security, previously Alien Vault Open Threat Exchange (OTX)](otx.alienvault.com)
  * [Malware Information Sharing Project (MISP)](misp-project.org/feeds)
  * [Spamhaus](spamhaus.org/organization)
  * [VirusTotal](virustotal.com)

# Who Benefits from Threat Intelligence

Threat intelligence benefits organizations of all shapes and sizes by helping process threat data to better understand their attackers, respond faster to incidents, and proactively get ahead of a threat actor’s next move. For SMBs, this data helps them achieve a level of protection that would otherwise be out of reach. On the other hand, enterprises with large security teams can reduce the cost and required skills by leveraging external threat intel and make their analysts more effective.

From top to bottom, threat intelligence offers unique advantages to every member of a security team, including:

![www crowdstrike com_cybersecurity-101_threat-intelligence_](https://user-images.githubusercontent.com/71202864/196543437-034aa67b-6003-49e6-b075-52256ab31987.png)

# IoA and IoC

## IoA (Indicator of Attack)

loA is a proactive method similar to Threat Hunting, in which defenders search for early warning indications that could suggest an attack, however this is not always  the case. True or false positives, code execution, Command and Control, or lateral movement within networks are all examples of warning indicators from the perspective of information security.

Regardless of the malware or exploit used in an attack, indicators of attack (IOA) focus on detecting the intent of what an attacker is trying to accomplish. An IOC-based detection approach, like AV signatures, is unable to detect the growing dangers from malware-free intrusions and zero-day vulnerabilities. Systems that detect IoAs, on the other hand, work in real-time to detect exploits as they happen, rather than conducting after-the-fact investigations to uncover the signs of a breach.

## IoC (Indicator of Compromise)

IoC is based on a reactive strategy, since it signals that the attack has already occurred. Reactive strategies are effective in the aftermath of an attack. For example, you'll look for viruses, malware, exploits, signatures, and malicious IPs that the breach has left behind. 

In the forensics industry, an Indicator of Compromise (IOC) is evidence on a computer that suggests that the network’s security has been compromised. Investigators typically collect this information after being notified of a suspicious incident, on a regular basis, or after discovering odd network call-outs. This data is ideally collected in order to develop “smarter” systems that can detect and quarantine suspicious files in the future. Systems that work by detecting IoCs are reactive. They examine events after they have occurred, essentially identifying problems after they have occurred. 

# Sources

* [CompTIA Security+ (SY0-601)](https://www.comptia.org/training/books/security-sy0-601-study-guide)
* [CROWDSTRIKE](https://www.crowdstrike.com/cybersecurity-101/threat-intelligence/)
* [SOC Investigation](https://www.socinvestigation.com/ioc-vs-ioa-indicators-of-threat-intelligence/)

