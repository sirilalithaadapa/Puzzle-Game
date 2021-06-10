
## Using Branch and Bound Algorithm 


 # Problem statement: 

This program is a game in which numbers are spread randomly and the player is supposed to arrange them in order with the given keys. 

 
# Problem Explanation: 

In this problem there are 15 tiles, which are numbered from 0 – 15. 

The objective of this problem is to transform the arrangement of tiles from initial arrangement to a goal arrangement. 

The initial and goal arrangement is shown by the following figure. 

# Steps / Algorithm to solve the problem: 

Move the empty space in the grid in order from 1 to 15 where A=10 to F=15 

To move the tile you can use your keywords on the keyboard.  

W or w - up, 

S or s- Down, 

A or a- Left, 

D or d - Right 

If any other character is used, then it shows a dialogue of the Wrong character being used. 

In the puzzle above A=10, B=11, C=12, D=13, E=14, F is 15. 

 

# Sample input and output: 

==================== 

| F | E |  1 |  6  | 

|  9 | B |  4 | C  | 

|    | A |  7 |  3  | 

| D |  8 |  5 |  2  | 

 ==================== 

RRRULDDLUUULDRURDDDRULLULURRRDDLDLUURDDLULURRULDRDRD 52 moves 

Found the shortest path is 1130063 steps and 17.61 seconds 

 ==================== 

|  1 |  2 |  3 |  4  | 

|  5 |  6 |  7 |  8  | 

|  9 |  A | B  |  C  | 

|  D  | E | F  |     | 

 ==================== 
