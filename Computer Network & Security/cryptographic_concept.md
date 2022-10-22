# Cryptographic Concepts

Cryptography (literally meaning "secret writing") has been around for thousands of years. It is the art of making information secure by encoding it. This stands in opposition to the concept of security through obscurity. Security through obscurity means keeping something a secret by hiding it. This is generally acknowledged to be impossible (or at least, high risk) on any sort of computer network. With cryptography, it does not matter if third parties know of the existence of the secret, because they can never know what it is without obtaining an appropriate credential.

The following terminology is used to discuss cryptography:

* Plaintext (or cleartext)—an unencrypted message.
* Ciphertext—an encrypted message.
* Cipher—the process (or algorithm) used to encrypt and decrypt a message.
* Cryptanalysis—the art of cracking cryptographic systems.

There are three main types of cryptographic algorithm with different roles to play in the assurance of the security properties confidentiality, integrity, availability, and non-repudiation. These types are hashing algorithms and two types of encryption ciphers: symmetric and asymmetric.

# Hashing Algorithms

Hashing is the simplest type of cryptographic operation. A cryptographic hashing algorithm produces a fixed length string from an input plaintext that can be of any length. The output can be referred to as a checksum, message digest, or hash. The function is designed so that it is impossible to recover the plaintext data from the digest (one-way) and so that different inputs are unlikely to produce the same output (a collision).

Hashing is the process of transforming any given key or a string of characters into another value. This is usually represented by a shorter, fixed-length value or key that represents and makes it easier to find or employ the original string. The most popular use for hashing is the implementation of hash tables. A hash table stores key and value pairs in a list that is accessible through its index. Because key and value pairs are unlimited, the hash function will map the keys to the table size. A hash value then becomes the index for a specific element.

## What is Hashing in Cybersecurity?

Many encryption algorithms use hashing to enhance cybersecurity. Hashed strings and inputs are meaningless to hackers without a decryption key.

For example, if hackers breach a database and find data like "John Doe, Social Security number 273-76-1989," they can immediately use that information for their nefarious activities. However, a hashed value like "a87b3" is useless for threat actors unless they have a key to decipher it. 

As such, hashing helps secure passwords stored in a database.

# Encryption Ciphers and Keys

While a hash function can be used to prove the integrity of data, it cannot be used to store or transmit data. The plaintext cannot be recovered from the digest. An encryption algorithm is a type of cryptographic process that encodes data so that it can be recovered, or decrypted. The use of a key with the encryption cipher ensures that decryption can only be performed by authorized persons.

A cipher algorithm is a mathematical formula designed specifically to obscure the value and content of data. Most valuable cipher algorithms use a key as part of the formula. This key is used to encrypt the data, and either that key or a complementary key is needed to decrypt the data back to a useful form.

Many cipher algorithms increase their protection by increasing the size of the keys they use. However, the larger the key, the more computing time is needed to encrypt and decrypt data. So it is important to choose a cipher algorithm that strikes a balance between your protection needs and the computational cost of protecting the data.

# Symmetric Encryption

With symmetric cryptography (or symmetric-key encryption), the same key is used for both encryption and decryption as shown in image below.

![image](https://user-images.githubusercontent.com/71202864/197298272-f37eff02-5827-48a3-ab74-78615075f2e5.png)

Symmetric key ciphers are valuable because:
* It is relatively inexpensive to produce a strong key for these ciphers.
* The keys tend to be much smaller for the level of protection they afford.
* The algorithms are relatively inexpensive to process.

Therefore, implementing symmetric cryptography (particularly with hardware) can be highly effective because you do not experience any significant time delay as a result of the encryption and decryption. Symmetric cryptography also provides a degree of authentication because data encrypted with one symmetric key cannot be decrypted with any other symmetric key. Therefore, as long as the symmetric key is kept secret by the two parties using it to encrypt communications, each party can be sure that it is communicating with the other as long as the decrypted messages continue to make sense.

There are two types of symmetric encryption: stream ciphers and block ciphers.

1. Stream Ciphers

    In a stream cipher, each byte or bit of data in the plaintext is encrypted one at a time. This is suitable for encrypting communications where the total length of the message is not known. The plaintext is combined with a separate randomly generated message, calculated from the key and an initialization vector (IV). The IV ensures the key produces a unique ciphertext from the same plaintext. The keystream must be unique, so an IV must not be reused with the same key. The recipient must be able to generate the same keystream as the sender and the streams must be synchronized. Stream ciphers might use markers to allow for synchronization and retransmission. Some types of stream ciphers are made self-synchronizing.

2. Block Ciphers

    In a block cipher, the plaintext is divided into equal-size blocks (usually 128-bit). If there is not enough data in the plaintext, it is padded to the correct size using some string defined in the algorithm. For example, a 1200-bit plaintext would be padded with an extra 80 bits to fit into 10 x 128-bit blocks. Each block is then subjected to complex transposition and substitution operations, based on the value of the key used.

    The Advanced Encryption Standard (AES) is the default symmetric encryption cipher for most products. Basic AES has a key size of 128 bits, but the most widely used variant is AES256, with a 256-bit key.
    
# Asymmetric Encryption

In a symmetric encryption cipher, the same secret key is used to perform both encryption and decryption operations. With an asymmetric cipher, operations are performed by two different but related public and private keys in a key pair. Each key is capable of reversing the operation of its pair. For example, if the public key is used to encrypt a message, only the paired private key can decrypt the ciphertext produced. The public key cannot be used to decrypt the ciphertext, even though it was used to encrypt it.

The keys are linked in such a way as to make it impossible to derive one from the other. This means that the key holder can distribute the public key to anyone he or she wants to receive secure messages from. No one else can use the public key to decrypt the messages; only the linked private key can do that. Asymmetric encryption can be used to prove identity. The holder of a private key cannot be impersonated by anyone else. The drawback of asymmetric encryption is that it involves substantial computing overhead compared to symmetric encryption. The message cannot be larger than the key size. Where a large amount of data is being encrypted on disk or transported over a network, asymmetric encryption is inefficient.

# Public Key Cryptography

The most commonly used implementations of public key cryptography (also known as public-key encryption and asymmetric encryption) are based on algorithms presented by Rivest-Shamir-Adelman (RSA) Data Security.

Public key cryptography involves a pair of keys known as a public key and a private key (a public key pair), which are associated with an entity that needs to authenticate its identity electronically or to sign or encrypt data. Each public key is published and the corresponding private key is kept secret. Data that is encrypted with the public key can be decrypted only with the corresponding private key. RSA public key pairs can be any size. Typical sizes today are 1024 and 2048 bits.

Public key cryptography enables the following:
* Encryption and decryption, which allow two communicating parties to disguise data that they send to each other. The sender encrypts, or scrambles, the data before sending it. The receiver decrypts, or unscrambles, the data after receiving it. While in transit, the encrypted data is not understood by an intruder.
* Nonrepudiation, which prevents:
  * The sender of the data from claiming, at a later date, that the data was never sent
  * The data from being altered.

# Sources

* [CompTIA Security+ (SY0-601)](https://www.comptia.org/training/books/security-sy0-601-study-guide)
* [IBM](https://www.ibm.com/docs/en/ztpf/1.1.0.15?topic=library-security)
* [TechTarget](https://www.techtarget.com/searchdatamanagement/definition/hashing)
