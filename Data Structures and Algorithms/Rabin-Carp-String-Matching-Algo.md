<h1>Rabin Carp String Matching Algorithm</h1>
This algorithm is based on the concept of hashing, so if you are not familiar with string hashing, refer to the string hashing article on Internet. This algorithm was authored by Rabin and Karp in 1987. The Rabin-Karp string matching algorithm calculates a hash value for the pattern, as well as for each M-character subsequences of text to be compared. If the hash values are unequal, the algorithm will determine the hash value for next M-character sequence. If the hash values are equal, the algorithm will analyze the pattern and the M-character sequence. In this way, there is only one comparison per text subsequence, and character matching is only required when the hash values match.

<h2>Problem: </h2>
Given two strings - a pattern 's'  and a text 't', determine if the pattern appears in the text and if it does, enumerate all its occurrences in O(|s| + |t|) time.

<h2>Algorithm: </h2>
Calculate the hash for the pattern 's'. Calculate hash values for all the prefixes of the text 't'. Now, we can compare a substring of length |s| with s in constant time using the calculated hashes. So, compare each substring of length |s| with the pattern. This will take a total of O(|t|) time. Hence the final complexity of the algorithm is O(|t| + |s|) :  is required for calculating the hash of the pattern and  for comparing each substring of length |s| with the pattern.

<h2>Implementation in C++: </h2>
```
vector<int> rabin_karp(string const& s, string const& t) { </br>
    const int p = 31; </br>
    const int m = 1e9 + 9; </br>
    int S = s.size(), T = t.size(); </br>

    vector<long long> p_pow(max(S, T)); </br>
    p_pow[0] = 1; </br>
    for (int i = 1; i < (int)p_pow.size(); i++)</br>
        p_pow[i] = (p_pow[i-1] * p) % m; </br>

    vector<long long> h(T + 1, 0); </br>
    for (int i = 0; i < T; i++) </br>
        h[i+1] = (h[i] + (t[i] - 'a' + 1) * p_pow[i]) % m; </br>
    long long h_s = 0; </br>
    for (int i = 0; i < S; i++) </br>
        h_s = (h_s + (s[i] - 'a' + 1) * p_pow[i]) % m; </br>

    vector<int> occurences; </br>
    for (int i = 0; i + S - 1 < T; i++) { </br>
        long long cur_h = (h[i+S] + m - h[i]) % m; </br>
        if (cur_h == h_s * p_pow[i] % m)</br>
            occurences.push_back(i);</br>
    }</br>
    return occurences;</br>
}</br>
```
<h2>Implementation in Java: </h2>

```
public class RabinKarp { </br>
  public final static int d = 10; </br>
  static void search(String pattern, String txt, int q) { </br>
    int m = pattern.length(); </br>
    int n = txt.length(); </br>
    int i, j; </br>
    int p = 0; </br>
    int t = 0; </br>
    int h = 1; </br>
    for (i = 0; i < m - 1; i++) </br>
      h = (h * d) % q; </br>
// Calculate hash value for pattern and text
    for (i = 0; i < m; i++) { </br>
      p = (d * p + pattern.charAt(i)) % q; </br>
      t = (d * t + txt.charAt(i)) % q; </br>
    } </br>
// Find the match </br>
    for (i = 0; i <= n - m; i++) { </br>
      if (p == t) { </br>
        for (j = 0; j < m; j++) { </br>
          if (txt.charAt(i + j) != pattern.charAt(j)) </br>
            break; </br>
        } </br>
  if (j == m)</br>
          System.out.println("Pattern is found at position: " + (i + 1)); </br>
      } </br>
  if (i < n - m) { </br>
        t = (d * (t - txt.charAt(i) * h) + txt.charAt(i + m)) % q; </br>
        if (t < 0) </br>
          t = (t + q); </br>
      } </br>
    } </br>
  } </br>
 public static void main(String[] args) { </br>
    String txt = "ABCCDDAEFG"; </br>
    String pattern = "CDD"; </br>
    int q = 13; </br>
    search(pattern, txt, q); </br>
  } </br>
}</br>
```
<h2>Implementation in Python: </h2> </br>
```
d = 10 </br>
def search(pattern, text, q): </br>
    m = len(pattern) </br>
    n = len(text) </br>
    p = 0 </br>
    t = 0 </br>
    h = 1 </br>
    i = 0 </br>
    j = 0 </br>

    for i in range(m-1): </br>
        h = (h*d) % q </br>
    for i in range(m): </br>
        p = (d*p + ord(pattern[i])) % q </br>
        t = (d*t + ord(text[i])) % q </br>
    for i in range(n-m+1): </br>
        if p == t: </br>
            for j in range(m): </br>
                if text[i+j] != pattern[j]: </br>
                    break </br>

            j += 1 </br>
            if j == m: </br>
                print("Pattern is found at position: " + str(i+1)) </br>

        if i < n-m: </br>
            t = (d*(t-ord(text[i])*h) + ord(text[i+m])) % q </br>

            if t < 0: </br>
                t = t+q </br>

text = "ABCCDDAEFG" </br>
pattern = "CDD" </br>
q = 13 </br>
search(pattern, text, q) </br>
```
