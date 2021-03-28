# Daa C2 Assingment-2
#### Team Members

|Enrollment No.|Name|Github Id|
|--------------|----|--------|
|IIT2019219|Gitika Yadav|curiouskid26|
|IIT2019220|Divyatez Singh|d3ad5h01|
|IIT2019221|Divyansh Rai|Lazy-Leopard|

*Group No-* 12

*Faculty Name-* Dr. Rahul Kala 

*Mentor Name-* Md. Meraz

---
## Problem Statement
Use divide and conquer to compute 1+2+3+4+.... upto n numbers.

---
## How to use code
```
Download project
git clone https://github.com/d3ad5h01/DAA_Assignments.git
```
Project Initialize 
```
#Opening Assingment folder
cd Assingment2

#Compiling The code
g++ natSum.cpp -o output
```
---

Run the code
```
./output
```
Input
```
Input contains an integer n, upto which sum has to be calculated.
```
Ouput 
```
Output will be an integer, i.e., the value of sum from 1 to n.
```
---
*Test case*

Test Case-1
```
Input:
10

Output:
55
```

Test Case-2
```
Input:
25

Output:
325

```

---
### Theory
Logic
```
1. We store values from 1 to n in an array.
2. In sumArray function we check for base cases like if size of array is 0, then sum is 0.
3. Else if size of array is 1, then sum is value of the only element.
4. Then we apply divide and conquor by dividing array in two halves and recursively calling the function sumArray.
5. Finally, we return the sum of the two halves.
```

---
### Analysis

*Time Complexity*
```
For all the cases : o(n)
```
*Space Complexity*
```
For all the cases : o(n)
```
where n is an integer upto which sum has to be calculated.

---
### References
```
Introduction to Divide and Conquer Technique: GFG
Introduction to Algorithms by Cormen,Charles, Rivest and Stein.
```
