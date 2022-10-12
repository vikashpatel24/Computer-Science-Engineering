# Algorithms & data structures project

Algorithms and data structures are fundamental to efficient code and good software design. Creating and designing excellent algorithms is required for being an exemplary programmer. This repository's goal is to demonstrate how to correctly implement common data structures and algorithms in the simplest and most elegant ways.


# Running an algorithm implementation

To compile and run any of the algorithms here, you need at least JDK version 8. Gradle can make things more convenient for you, but it is not required.

## Running with Gradle (recommended)

This project supports the [Gradle Wrapper](https://docs.gradle.org/current/userguide/gradle_wrapper.html). The Gradle wrapper automatically downloads Gradle the first time it runs, so expect a delay when running the first command below.

If you are on Windows, use `gradlew.bat` instead of `./gradlew` below.

Run a single algorithm like this:

```
./gradlew run -Palgorithm=<algorithm-subpackage>.<algorithm-class>
```

Alternatively, you can run a single algorithm specifying the full class name

```
./gradlew run -Pmain=<algorithm-fully-qualified-class-name>

```

For instance:

```
./gradlew run -Palgorithm=search.BinarySearch
```

or

```
./gradlew run -Pmain=com.williamfiset.algorithms.search.BinarySearch
```

## Compiling and running with only a JDK

### Create a classes folder

```
cd Algorithms
mkdir classes
```

### Compile the algorithm

```
javac -sourcepath src/main/java -d classes src/main/java/ <relative-path-to-java-source-file>
```

### Run the algorithm

```
java -cp classes <class-fully-qualified-name>
```

### Example

```
$ javac -d classes -sourcepath src/main/java src/main/java/com/williamfiset/algorithms/search/BinarySearch.java
$ java -cp classes com.williamfiset.algorithms.search.BinarySearch
```

# Data Structures

- [:movie_camera:](https://www.youtube.com/watch?v=q4fnJZr8ztY) [Balanced Trees](src/main/java/com/williamfiset/algorithms/datastructures/balancedtree)
  - [AVL Tree (recursive)](src/main/java/com/williamfiset/algorithms/datastructures/balancedtree/AVLTreeRecursive.java)
  - [Red Black Tree (recursive)](src/main/java/com/williamfiset/algorithms/datastructures/balancedtree/RedBlackTree.java)
- [:movie_camera:](https://www.youtube.com/watch?v=JfSdGQdAzq8) [Binary Search Tree](src/main/java/com/williamfiset/algorithms/datastructures/binarysearchtree/BinarySearchTree.java)
- [Splay Tree](src/main/java/com/williamfiset/algorithms/datastructures/binarysearchtree/SplayTree.java)
- [:movie_camera:](https://www.youtube.com/watch?v=PEnFFiQe1pM) [Dynamic Array](src/main/java/com/williamfiset/algorithms/datastructures/dynamicarray)
  - [Dynamic array (integer only, fast)](src/main/java/com/williamfiset/algorithms/datastructures/dynamicarray/IntArray.java)
- [:movie_camera:](https://www.youtube.com/watch?v=RgITNht_f4Q) [Fenwick Tree](src/main/java/com/williamfiset/algorithms/datastructures/fenwicktree)
  - [Fenwick Tree (range query, point updates)](src/main/java/com/williamfiset/algorithms/datastructures/fenwicktree/FenwickTreeRangeQueryPointUpdate.java)
  - [Fenwick Tree (range update, point query)](src/main/java/com/williamfiset/algorithms/datastructures/fenwicktree/FenwickTreeRangeUpdatePointQuery.java)
- [Fibonacci Heap](src/main/java/com/williamfiset/algorithms/datastructures/fibonacciheap)
- [:movie_camera:](https://www.youtube.com/watch?v=2E54GqF0H4s) [Hashtable](src/main/java/com/williamfiset/algorithms/datastructures/hashtable)
  - [Hashtable (double hashing)](src/main/java/com/williamfiset/algorithms/datastructures/hashtable/HashTableDoubleHashing.java)
  - [Hashtable (linear probing)](src/main/java/com/williamfiset/algorithms/datastructures/hashtable/HashTableLinearProbing.java)
  - [Hashtable (quadratic probing)](src/main/java/com/williamfiset/algorithms/datastructures/hashtable/HashTableQuadraticProbing.java)
  - [Hashtable (separate chaining)](src/main/java/com/williamfiset/algorithms/datastructures/hashtable/HashTableSeparateChaining.java)
- [:movie_camera:](https://www.youtube.com/watch?v=-Yn5DU0_-lw) [Linked List](src/main/java/com/williamfiset/algorithms/datastructures/linkedlist/DoublyLinkedList.java)
- [:movie_camera:](https://www.youtube.com/watch?v=wptevk0bshY) [Priority Queue](src/main/java/com/williamfiset/algorithms/datastructures/priorityqueue)
  - [Min Binary Heap](src/main/java/com/williamfiset/algorithms/datastructures/priorityqueue/BinaryHeap.java)
  - [Min Indexed Binary Heap (sorted key-value pairs, similar to hash-table)](src/main/java/com/williamfiset/algorithms/datastructures/priorityqueue/MinIndexedBinaryHeap.java)
  - [Min D-Heap](src/main/java/com/williamfiset/algorithms/datastructures/priorityqueue/MinDHeap.java)
  - [:movie_camera:](https://www.youtube.com/watch?v=DT8xZ0Uf8wo) [Min Indexed D-Heap (sorted key-value pairs, similar to hash-table)](src/main/java/com/williamfiset/algorithms/datastructures/priorityqueue/MinIndexedDHeap.java)
- [:movie_camera:](https://www.youtube.com/watch?v=KxzhEQ-zpDc) [Queue](src/main/java/com/williamfiset/algorithms/datastructures/queue)
  - [Queue (integer only, fixed size, fast)](src/main/java/com/williamfiset/algorithms/datastructures/queue/IntQueue.java)
  - [Queue (linked list, generic)](src/main/java/com/williamfiset/algorithms/datastructures/queue/Queue.java)
- [Segment Tree](src/main/java/com/williamfiset/algorithms/datastructures/segmenttree)
  - [Segment tree (array based, compact)](src/main/java/com/williamfiset/algorithms/datastructures/segmenttree/CompactSegmentTree.java)
  - [Segment tree (pointer implementation)](src/main/java/com/williamfiset/algorithms/datastructures/segmenttree/Node.java)
- [:movie_camera:](https://youtu.be/uUatD9AudXo) [Sparse Table](src/main/java/com/williamfiset/algorithms/datastructures/sparsetable/SparseTable.java)
- [:movie_camera:](https://www.youtube.com/watch?v=L3ud3rXpIxA) [Stack](src/main/java/com/williamfiset/algorithms/datastructures/stack)
  - [Stack (integer only, fixed size, fast)](src/main/java/com/williamfiset/algorithms/datastructures/stack/IntStack.java)
  - [Stack (linked list, generic)](src/main/java/com/williamfiset/algorithms/datastructures/stack/ListStack.java)
  - [Stack (array, generic)](src/main/java/com/williamfiset/algorithms/datastructures/stack/ArrayStack.java)
- [:movie_camera:](https://www.youtube.com/watch?v=zqKlL3ZpTqs) [Suffix Array](src/main/java/com/williamfiset/algorithms/datastructures/suffixarray)
  - [Suffix Array (O(n²logn) construction)](src/main/java/com/williamfiset/algorithms/datastructures/suffixarray/SuffixArraySlow.java)
  - [Suffix Array (O(nlog²(n)) construction)](src/main/java/com/williamfiset/algorithms/datastructures/suffixarray/SuffixArrayMed.java)
  - [Suffix Array (O(nlog(n)) construction)](src/main/java/com/williamfiset/algorithms/datastructures/suffixarray/SuffixArrayFast.java)
- [Trie](src/main/java/com/williamfiset/algorithms/datastructures/trie/Trie.java)
- [:movie_camera:](https://www.youtube.com/watch?v=ibjEGG7ylHk) [Union Find](src/main/java/com/williamfiset/algorithms/datastructures/unionfind/UnionFind.java)

