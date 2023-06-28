# ALPHA - BETA PRUNING ALGORITHM 

-> Alpha-beta pruning is a search algorithm used in game theory and artificial intelligence to optimize the evaluation of nodes in 
   aminimax search tree.

-> It aims to reduce the number of nodes that need to be evaluated by eliminating unnecessary branches.

-> The algorithm maintains two values, alpha and beta, which represent the minimum and maximum values that the maximizing and 
   minimizing players can guarantee, respectively.

-> The initial call to the alpha-beta function passes in alpha as negative infinity and beta as positive infinity.

-> During the search, the algorithm updates the alpha and beta values as it explores different paths in the game tree.

-> When evaluating a maximizing node, if the algorithm finds a value that is greater than or equal to beta, it prunes the remaining  
  children nodes of that parent node.

-> Conversely, when evaluating a minimizing node, if the algorithm finds a value that is less than or equal to alpha, it prunes the 
   remaining children nodes.

#  EXAMPLE ON HOW GRAPH ARE  REPRESENTED WITH ALPHA-BETA PRUNING

-> Example with a graph: Suppose we have a game tree with multiple levels, and at a certain depth, we encounter a maximizing node 
   labeled A with two child nodes B and C.

-> Initially, we set alpha to negative infinity and beta to positive infinity. We start evaluating node B, which returns a value of 8.

-> We update alpha to 8 since it is a maximizing node. We continue evaluating node C and find its value to be 5.

->As we explore more sibling nodes, if we encounter a node with a value greater than or equal to 8 (alpha), we can prune the 
  remaining siblings because the maximizing player will always choose the path with a guaranteed outcome of at least 8.

-> Similarly, if we encounter a node with a value less than or equal to 5 (beta), we can prune the remaining siblings for minimizing 
   nodes since the minimizing player will always choose the path with a guaranteed outcome of at most 5.

# CONCLUSION
-> By pruning these unnecessary branches, the algorithm can focus on evaluating promising paths, reducing the computational effort 
   required.