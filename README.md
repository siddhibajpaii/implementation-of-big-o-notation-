# Implementation-of-Big-O-notation-in-CPP

Aim: To study and implement Big O notation in C++

# Program Time complexity
Theory with explanation of the code:
- Time complexity measures how the runtime of an algorithm grows with input size.
- O(1) represents constant time: execution does not depend on input size.
- O(n) represents linear time: execution scales directly with input size.
- O(n²) represents quadratic time: execution scales with the square of input size.
- getFirstElement() demonstrates O(1) by accessing a single element.
- printElements() demonstrates O(n) by printing each element once.
- printPairs() demonstrates O(n²) by printing all possible pairs.
- These examples help visualize how performance changes with input growth.
- Understanding time complexity is crucial for writing efficient code.
- It guides algorithm selection based on data size and performance needs.

Algorithm:

- Start
- Define a vector with sample integers.
- Call a function to return the first element (O(1)).
- Call a function to print all elements (O(n)).
- Call a function to print all element pairs (O(n²)).
- Display the output for each case.
- End

# Conclusion
This program effectively illustrates how different time complexities behave. 
O(1) is fastest and ideal for direct access, 
O(n) is manageable for moderate data, and 
O(n²) becomes costly as input grows. 
Recognizing these patterns helps developers optimize algorithms and make informed design choices for scalable applications.
