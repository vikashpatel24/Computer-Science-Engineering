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
