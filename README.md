

# DFS Algorithm and GIT




## DFS Algorithm
1.Declare a array as adjacency matrix.  
2.Define a stack with size of total number of nodes.
3.Select any node as the starting point of traversal and push it in the stack.  
4.Check if it has any unvisited neighbour nodes. If so push it in the stack  
5.Repeat step 4 untill there is no neighbour node, of the node which is at the top of the stack.  
6.Pop the node from the top of the stack.  
7.Repeat step 4, 5 and 6 untill the stack is empty.  
8.When the stack is empty the whole graph is traversed.   
## DFS Step:
An adjacency matrix from this graph:

![WhatsApp Image 2024-05-01 at 11 22 21 PM](https://github.com/AbrarShazid/spring/assets/137707705/17b17249-477f-45c7-9027-1a77f04d2583)

## Step 1:
In this case we can start the traversal from node "0". We need to define a stack to track the nodes.

![1](https://github.com/AbrarShazid/spring/assets/137707705/b9943adf-0f66-457f-a0b1-ca3d77adda92)

* First put the first node (in this case 0) to the stack.
* Then check if there are any adjacent nodes.

## Step 2:
* We found adjacent node is 1 so put this in stack.
* Then check if there are any adjacent nodes of the current node.

![2](https://github.com/AbrarShazid/spring/assets/137707705/11707811-eafd-4b79-bfbc-7a0b0eb51b04)

## Step 3:
Keep repeating this process untill there are no adjacent node of the current node.

![3](https://github.com/AbrarShazid/spring/assets/137707705/ec478822-c243-4836-b546-7afb01ce1292)

![4](https://github.com/AbrarShazid/spring/assets/137707705/bd3349ad-7da0-444d-9123-497711ca94e6)

![5](https://github.com/AbrarShazid/spring/assets/137707705/6ef9b9a5-d9e6-4578-9fa5-cd29616976eb)

* Here node "5" has no adjacent node. So we will pop it out of the stack to check the previous node.
* If the previous node has an adjacent node push it in the stack or pop the current node out of stack until any unvisited node is found

## Step 4:
Keep repating step 2 and step 3 until the stack is empty.

![6](https://github.com/AbrarShazid/spring/assets/137707705/c285683e-f201-490a-a644-036fb08298de)

![7](https://github.com/AbrarShazid/spring/assets/137707705/02a61831-565a-44ff-97ae-b35f50376a2a)

## Step 5:
And the DFS output starting from node "0" is: 0, 1, 3, 2, 5, 4

![8](https://github.com/AbrarShazid/spring/assets/137707705/a7ab6821-f7b1-4a75-bf79-f581b503ad1d)


## GIT Bash:  


![git](https://github.com/AbrarShazid/spring/assets/137707705/bff2ff9b-4fe5-4a29-adb1-8454d9e19e14)
