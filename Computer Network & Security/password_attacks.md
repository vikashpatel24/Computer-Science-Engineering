# Password Attacks

Password attacks, it’s a type of cyberattack where hackers attempt to access a file, folder, account, or computer secured with a password. When a user chooses a password, the password is converted to a hash using a cryptographic function, such as MD5 or SHA. This means that, in theory, no one except the user (not even the system administrator) knows the password, because the plaintext should not be recoverable from the hash.

1. **Plaintext/Unencrypted Attacks**

   A plaintext/unencrypted attack exploits password storage or a network authentication protocol that does not use encryption. Examples include PAP, basic HTTP/FTP   authentication, and Telnet. These protocols must not be used. Passwords must never be saved to an unmanaged file. One common source of credential breaches is passwords embedded in application code that has subsequently been uploaded to a public repository.

2. **Online Attacks**

    An online password attack is where the threat actor interacts with the authentication service directly—a web login form or VPN gateway, for instance. The attacker submits passwords using either a database of known passwords (and variations) or a list of passwords that have been cracked offline.

3. **Password Spraying**
    
   Password spraying is a horizontal brute-force online attack. This means that the attacker chooses one or more common passwords (for example, password or 123456) and tries them in conjunction with multiple usernames.

4. **Offline Attacks**
   
    An offline attack means that the attacker has managed to obtain a database of password hashes, such as `%SystemRoot%\System32\config\SAM`, `%SystemRoot%\NTDS\NTDS.DIT` (the Active Directory credential store), or /etc/shadow. Once the password database has been obtained, the cracker does not interact with the authentication system. The only indicator of this type of attack (other than misuse of the account in the event of a successful attack) is a file system audit log that records the malicious account accessing one of these files. Threat actors can also read credentials from host memory, in which case the only reliable indicator might be the presence of attack tools on a host.

# Brute Force and Dictionary Attacks

## Brute Force

“An attack in which cybercriminals utilize trial-and-error tactics to decode passwords, personal identification numbers (PINs), and other forms of login data by leveraging automated software to test large quantities of possible combinations.”

To conduct a brute-force attack, an attacker may use a tool to attempt every combination of letters and numbers, expecting to eventually guess the password. If the attacker knows that an organization requires special characters in their password, the tool could be instructed to include letters, numbers, and symbols. Every password, no matter how strong, is vulnerable to this attack. However, this method is going to take a while (years, if the password is long enough).

The length of time required to crack a short password (such as a four-digit PIN) might be under a minute. Extending that to six characters could take an hour. Extending that to eight characters, with both letters and symbols, might take days. Note that each new character exponentially increases the amount of time necessary for a brute-force attack to discover the password. So a strong, lengthy password, could take weeks or months. But, with enough computing power and a particularly dedicated attacker, the password would eventually be discovered.

## Dictionary Attacks

“A type of brute force attack where an intruder attempts to crack a password-protected security system with a “dictionary list” of common words and phrases used by businesses and individuals.”

In a dictionary attack, the attacker utilizes a wordlist in the hopes that the user’s password is a commonly used word (or a password seen in previous sites). Dictionary attacks are optimal for passwords that are based on a simple word (e.g. 'cowboys' or 'longhorns'). Wordlists aren’t restricted to English words; they often also include common passwords (e.g. 'password,' 'letmein,' or 'iloveyou,' or '123456').But modern systems restrict their users from such simple passwords, requiring users to come up with strong passwords that would hopefully not be found in a wordlist.

## Hybrid Attack

A hybrid password attack uses a combination of dictionary and brute-force attacks. It is principally targeted against naïve passwords with inadequate complexity, such as james1. The password cracking algorithm tests dictionary words and names in combination with a mask that limits the number of variations to test for, such as adding numeric prefixes and/or suffixes. Other types of algorithms can be applied, based on what hackers know about how users behave when forced to select complex passwords that they don't really want to make hard to remember. Other examples might include substituting "s" with "5" or "o" with "0."

# Password Cracking 

Password cracking is the process of using an application program to identify an unknown or forgotten password to a computer or network resource. It can also be used to help a threat actor obtain unauthorized access to resources.

With the information malicious actors gain using password cracking, they can undertake a range of criminal activities. Those include stealing banking credentials or using the information for identity theft and fraud.

A password cracker recovers passwords using various techniques. The process can involve comparing a list of words to guess passwords or the use of an algorithm to repeatedly guess the password.

## What does a password cracking attack look like?

The general process a password cracker follows involves these four steps:

1. Steal a password via some nefarious means. That password has likely been encrypted before being stored using a hash Hashes are mathematical functions that change arbitrary-length inputs into an encrypted fixed-length output.
2. Choose a cracking methodology, such as a brute-force or dictionary attack, and select a cracking tool.
3. Prepare the password hashes for the cracking program. This is done by providing an input to the hash function to create a hash that can be authenticated.
4. Run the cracking tool.

A password cracker may also be able to identify encrypted passwords. After retrieving the password from the computer's memory, the program may be able to decrypt it. Or, by using the same algorithm as the system program, the password cracker creates an encrypted version of the password that matches the original.

## What are password cracking tools?

Password crackers can be used maliciously or legitimately to recover lost passwords. Among the password cracking tools available are the following three:

1. Cain and Abel. 

    This password recovery software can recover passwords for Microsoft Windows user accounts and Microsoft Access passwords. Cain and Abel uses a graphical user interface, making it more user-friendly than comparable tools. The software uses dictionary lists and brute-force attack methods.

2. Ophcrack. 

    This password cracker uses rainbow tables and brute-force attacks to crack passwords. It runs on Windows, macOS and Linux.

3. John the Ripper. 

    This tool uses a dictionary list approach and is available primarily for macOS and Linux systems. The program has a command prompt to crack passwords, making it more difficult to use than software like Cain and Abel.

# How do you create a strong password?

Every attack in password usually needs time to be finishid. It can be took about a days or hours, depending on how weak or strong the password is. To make a password stronger and more difficult to uncover, a plaintext password should adhere to the following rules:

1. Be at least 12 characters long. 
  The shorter a password is, the easier and faster it will be cracked.
2. Combine letters and a variety of characters. 
  Using numbers and special characters, such as periods and commas, increases the number of possible combinations.
3. Avoid reusing a password. 
  If a password is cracked, then a person with malicious intent could use that same password to easily access other password-protected accounts the victim owns.
4. Pay attention to password strength indicators. 
  Some password-protected systems include a password strength meter, which is a scale that tells users when they have created a strong password.
5. Avoid easy-to-guess phrases and common passwords. 
  Weak passwords can be a name, a pet's name or a birthdate -- something personally identifiable. Short and easily predictable patterns, like 123456, password or qwerty, also are weak passwords.
6. Use encryption. 
  Passwords stored in a database should be encrypted.

# Sources

* [CompTIA Security+ (SY0-601)](https://www.comptia.org/training/books/security-sy0-601-study-guide)
* [Rapid8](https://www.rapid7.com/fundamentals/brute-force-and-dictionary-attacks)
* [TechTarget](https://www.techtarget.com/searchsecurity/definition/password-cracker)
