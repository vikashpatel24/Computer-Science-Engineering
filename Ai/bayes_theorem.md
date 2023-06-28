# BAYES' THEOREM DISCRIPTION 

-Bayes' Theorem is a fundamental concept in probability theory that allows us to update the probability of an event based on new -evidence. It describes the relationship between conditional probabilities and is widely used in various fields, including -statistics, machine learning, and data analysis.

-The theorem can be stated as follows:
# CONDITIONAL PROBABILITY :

P(A|B) = (P(B|A) * P(A)) / P(B)

Where:

P(A|B) is the probability of event A given event B has occurred.
P(B|A) is the probability of event B given event A has occurred.
P(A) is the prior probability of event A.
P(B) is the prior probability of event B.

# EXAMPLE :

-Let's consider a medical scenario where we want to determine the probability of a patient having a certain disease (A) given that -they test positive (B). We have the following information:

-The probability of having the disease (P(A)) is 0.01 (1% of the population has the disease).
-The probability of testing positive given that the patient has the disease (P(B|A)) is 0.95 (the test is 95% accurate).
-The probability of testing positive given that the patient does not have the disease (P(B|¬A)) is 0.05 (false positive rate of 5%).
-Now, we can use Bayes' Theorem to calculate the probability of having the disease given a positive test result:

P(A|B) = (P(B|A) * P(A)) / P(B)
P(A|B) = (0.95 * 0.01) / (P(B|A) * P(A) + P(B|¬A) * P(¬A))
P(A|B) = (0.95 * 0.01) / (0.95 * 0.01 + 0.05 * 0.99)
P(A|B) ≈ 0.161 (approximately 16.1%)

# CONCLUSION OF ABOVE EXAMPLE:

-This means that even with a positive test result, the probability of actually having the disease is only around 16.1% due to the -relatively low prevalence of the disease in the population and the presence of false positives.

-Regarding "navy bays theorem," there is no specific theorem by that name. It seems to be a typographical error or confusion. Bayes' -Theorem is the correct term to refer to the probability theorem explained above.