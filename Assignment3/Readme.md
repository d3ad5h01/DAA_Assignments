# Daa C2 Assingment-6
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
Find the minimum  distance between any pair location(or cells) in a given 2D matrix.

---
## How to use code
```
Download project
git clone https://github.com/d3ad5h01/DAA_Assignments.git
```
Project Initialize 
```
#Opening Assingment folder
cd Assingment3

#Compiling The code
g++ code.cpp -o output
```
---

Run the code
```
./output
```
Input
```
Input contains two integers n and m, denoting size of a 2D matrix and then we input the elements of 2D matrix, i.e, 1's or 0's respectively.
```
Ouput 
```
Output will be an integer denoting cost of the path if it is found else an error message.
```
---
*Test case*

Test Case-1
```
Input:
6 6
1 1 1 1 1 1
0 0 0 0 0 1
1 1 1 1 1 1
1 0 0 0 0 0 
1 1 1 1 1 1
0 0 0 0 0 1
0 0
5 5 

Output:
21
```

Test Case-2
```
Input:
5 5
1 1 0 1 1 
0 1 0 0 0 
1 1 1 0 1 
0 0 0 0 0 
1 0 1 0 1 
0 1
4 2

Output:
Not Found

```

---
### Theory
Logic
```
1. Input dimension of given matrix. 
2. Store then the matrix and source cell’s and destination cell’s location.
3. Store each cell as a node with their row, column values and distance from the source cell.
4. Start BFS with the source cell.
5. Make a visited array with all having “false” values.
6. Keep updating distance from source value in each move.
7. Return distance when destination is met, else return -1 (no path exists in between source and destination).
```

---
### Analysis

*Time Complexity*
```
For all the cases : o(n+m)
```
*Space Complexity*
```
For all the cases : o(n*m)
```
where n and m are sizes of the matrix

---
### References
```
Breadth First Search or BFS for a Graph : GFG
Introduction to Algorithms by Cormen,Charles, Rivest and Stein.
```
