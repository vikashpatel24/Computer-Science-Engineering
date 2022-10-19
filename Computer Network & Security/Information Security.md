# Information Security

Information security (or infosec) refers to the protection of data resources from unauthorized access, attack, theft, or damage. Data may be vulnerable because of the way it is stored, the way it is transferred, or the way it is processed. The systems used to store, transmit, and process data must demonstrate the properties of security. Secure information has three properties, often referred to as the CIA Triad:

* **Confidentiality** means that certain information should only be known to certain people.
* **Integrity** means that the data is stored and transferred as intended and that any modification is authorized.
* **Availability** means that information is accessible to those authorized to view or modify it.

### CIA Triad Examples

To understand how the CIA triad works in practice, consider the example of a bank ATM, which can offer users access to bank balances and other information. An ATM has tools that cover all three principles of the triad:

* It provides **confidentiality** by requiring two-factor authentication (both a physical card and a PIN code) before allowing access to data.
* The ATM and bank software enforce data **integrity** by ensuring that any transfers or withdrawals made via the machine are reflected in the accounting for the user's bank account.
* The machine provides **availability** because it's in a public place and is accessible even when the bank branch is closed.

# Cybersecurity Framework

Within the goal of ensuring information security, cybersecurity refers specifically to provisioning secure processing hardware and software. Information security and cybersecurity tasks can be classified as five functions, following the framework developed by the National Institute of Standards and Technology [NIST](nist.gov/cyberframework/online-learning/five-functions):

* Identify—develop security policies and capabilities. Evaluate risks, threats, and vulnerabilities and recommend security controls to mitigate them.
* Protect—procure/develop, install, operate, and decommission IT hardware and software assets with security as an embedded requirement of every stage of this operations life cycle.
* Detect—perform ongoing, proactive monitoring to ensure that controls are effective and capable of protecting against new types of threats.
* Respond—identify, analyze, contain, and eradicate threats to systems and data security.
* Recover—implement cybersecurity resilience to restore systems and data if other controls are unable to prevent attacks.

![image](https://user-images.githubusercontent.com/71202864/196037500-dbf238b4-1da8-4571-a241-e898c7020a47.png)

### NIST Cybersecurity Framework

The NIST Cybersecurity Framework was established in response to an executive order by former President Obama — Improving Critical Infrastructure Cybersecurity — which called for greater collaboration between the public and private sector for identifying, assessing, and managing cyber risk. While compliance is voluntary, NIST has become the gold standard for assessing cybersecurity maturity, identifying security gaps, and meeting cybersecurity regulations.

### ISO 27001 and ISO 27002

Created by the International Organization for Standardization (ISO), ISO 27001 and ISO 27002 certifications are considered the international standard for validating a cybersecurity program — internally and across third parties. With an ISO certification, companies can demonstrate to the board, customers, partners, and shareholders that they are doing the right things to manage cyber risk. Likewise, if a vendor is ISO 27001/2 certified it’s a good indicator (although not the only one) that they have mature cybersecurity practices and controls in place.

The downside is that the process requires time and resources; organizations should only proceed if there is a true benefit, such as the ability to win new business. The certification is also a point-in-time exercise and could miss evolving risks that continuous monitoring can detect.

### SOC2

Service Organization Control (SOC) Type 2 is a trust-based cybersecurity framework and auditing standard developed by the American Institute of Certified Public Accountants (AICPA) to help verify that vendors and partners are securely managing client data. SOC2 specifies more than 60 compliance requirements and extensive auditing processes for third-party systems and controls. Audits can take a year to complete. At that point, a report is issued which attests to a vendors’ cybersecurity posture.

Because of its comprehensiveness, SOC2 is one of the toughest frameworks to implement — especially for organizations in the finance or banking sector who face a higher standard for compliance than other sectors. Nevertheless, it’s an important framework that should be central to any third-party risk management program.

### NERC-CIP

Introduced to mitigate the rise in attacks on U.S. critical infrastructure and growing third-party risk, the North American Electric Reliability Corporation - Critical Infrastructure Protection (NERC CIP) is a set of cybersecurity standards designed to help those in the utility and power sector reduce cyber risk and ensure the reliability of bulk electric systems.

The framework requires impacted organizations to identify and mitigate cyber risks in their supply chain. NERC-SIP stipulates a range of controls including categorizing systems and critical assets, training personnel, incident response and planning, recovery plans for critical cyber assets, vulnerability assessments, and more. Read more about effective strategies for achieving NERC-CIP compliance.

### OWASP Security Knowledge Framework

The OWASP Security Knowledge Framework is an open source web application that explains secure coding principles in multiple programming languages. The goal of OWASP-SKF is to help you learn and integrate security by design in your software development and build applications that are secure by design. OWASP-SKF does this through manageable software development projects with checklists (using OWASP-ASVS/OWASP-MASVS or custom security checklists) and labs to practice security verification (using SKF-Labs, OWASP Juice-shop, and best practice code examples from SKF and the OWASP-Cheatsheets).

# Information Security Business Units

The following units are often used to represent the security function within the organizational hierarchy.

### Security Operations Center (SOC)

A security operations center (SOC) is a location where security professionals monitor and protect critical information assets across other business functions, such as finance, operations, sales/marketing, and so on. Because SOCs can be difficult to establish, maintain, and finance, they are usually employed by larger corporations, like a government agency or a healthcare company.

### DevSecOps 

DevSecOps extends the boundary to security specialists and personnel, reflecting the principle that security is a primary consideration at every stage of software development and deployment. This is also known as shift left, meaning that security considerations need to be made during requirements and planning phases, not grafted on at the end. The principle of DevSecOps recognizes this and shows that security expertise must be embedded into any development project. Ancillary to this is the recognition that security operations can be conceived of as software development projects. Security tools can be automated through code. Consequently, security operations need to take on developer expertise to improve detection and monitoring.

### Incident Response

A dedicated cyber incident response team (CIRT)/computer security incident response team (CSIRT)/computer emergency response team (CERT) as a single point-of-contact for the notification of security incidents. This function might be handled by the SOC, or it might be established as an independent business unit.

# Regulations, Standards, and Legislation

The key frameworks, benchmarks, and configuration guides may be used to demonstrate compliance with a country's legal/regulatory requirements or with industry-specific regulations. Due diligence is a legal term meaning that responsible persons have not been negligent in discharging their duties. Negligence may create criminal and civil liabilities. Many countries have enacted legislation that criminalizes negligence in information management. In the US, for example, the Sarbanes-Oxley Act (SOX) mandates the implementation of risk assessments, internal controls, and audit procedures. The Computer Security Act (1987) requires federal agencies to develop security policies for computer systems that process confidential information. In 2002, the Federal Information Security Management Act (FISMA) was introduced to govern the security of data processed by federal government agencies.

### Personal Data and the General Data Protection Regulation (GDPR)

Where some types of legislation address cybersecurity due diligence, others focus in whole or in part on information security as it affects privacy or personal data. Privacy is a distinct concept from security. Privacy requires that collection and processing of personal information be both secure and fair. Fairness and the right to privacy, as enacted by regulations such as the European Union's General Data Protection Regulation (GDPR), means that personal data cannot be collected, processed, or retained without the individual's informed consent. Informed consent means that the data must be collected and processed only for the stated purpose, and that purpose must be clearly described to the user in plain language, not legalese. [GDPR](ico.org.uk/for-organisations/guide-to-data-protection/guide-to-the-general-data-protection-regulation-gdpr) gives data subjects rights to withdraw consent, and to inspect, amend, or erase data held about them.

### International Organization for Standardization (ISO) 27K

The International Organization for Standardization (ISO) has produced a cybersecurity framework in conjunction with the International Electrotechnical Commission (IEC). The framework was established in 2005 and revised in 2013. Unlike the NIST framework, the [ISO 27001](iso.org/standard/54534.html) Information Security Management standard must be purchased. ISO 27001 is part of an overall 27000 series of information security standards, also known as 27K. Of these, 27002 classifies security controls, 27017 and 27018 reference cloud security, and 27701 focuses on personal data and privacy.

### National, Territory, or State Laws

Compliance issues are complicated by the fact that laws derive from different sources. For example, the GDPR does not apply to American data subjects, but it does apply to American companies that collect or process the personal data of people in EU countries. In the US, there are national federal laws, state laws, plus a body of law applying to US territories (Puerto Rico, the US Virgin Islands, Guam, and American Samoa). Federal laws tend to focus either on regulations like FISMA for federal departments or as "vertical" laws affecting a particular industry. Examples of the latter include the Gramm–Leach–Bliley Act (GLBA) for financial services, and the Health Insurance Portability and Accountability Act (HIPAA).

### Payment Card Industry Data Security Standard (PCI DSS)

Compliance issues can also arise from industry-mandated regulations. For example, the Payment Card Industry Data Security Standard ([PCI DSS](pcisecuritystandards.org/pci_security)) defines the safe handling and storage of financial information.

# Sources

* [CompTIA Security+ (SY0-601)](https://www.comptia.org/training/books/security-sy0-601-study-guide)
* [CSO](https://www.csoonline.com/article/3519908/the-cia-triad-definition-components-and-examples.html)
* [BITSIGHT](https://www.bitsight.com/blog/7-cybersecurity-frameworks-to-reduce-cyber-risk)
* [OWASP](https://owasp.org/www-project-security-knowledge-framework/)
