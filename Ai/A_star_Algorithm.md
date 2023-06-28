
 # A* algorithm in Python:

import heapq
 
# CREATING A NODE 
class Node:
    def __init__(self, position, parent=None):
        self.position = position
        self.parent = parent
        self.g = 0
        self.h = 0
        self.f = 0

    def __lt__(self, other):
        return self.f < other.f

# A METHOD TO CALCULATE THE DISTANCE FROM START TO END
def calculate_distance(start, end):
    # Euclidean distance heuristic
    return ((end[0] - start[0]) ** 2 + (end[1] - start[1]) ** 2) ** 0.5

# A METHOD TO START A *
def a_star(grid, start, end):
    rows = len(grid)
    cols = len(grid[0])

 # Define the possible movements (right, left, down, up, diagonals)

    movements = [(1, 0), (-1, 0), (0, 1), (0, -1), (1, 1), (-1, 1), (1, -1), (-1, -1)]

    open_list = []
    closed_set = set()

    start_node = Node(start)
    end_node = Node(end)

    heapq.heappush(open_list, start_node)

# LOOP TO PERFORME THE ITERATIONS   
    while open_list:
        current_node = heapq.heappop(open_list)

        if current_node.position == end_node.position:
            path = []
            while current_node:
                path.append(current_node.position)
                current_node = current_node.parent
            return path[::-1]

        closed_set.add(current_node.position)
        
# CHANGING THE POSITIONS AND INCREMENTING THE MOVEMENT
        for movement in movements:
            row = current_node.position[0] + movement[0]
            col = current_node.position[1] + movement[1]

            if (
                row < 0
                or row >= rows
                or col < 0
                or col >= cols
                or grid[row][col] == 1
                or (row, col) in closed_set
            ):
                continue

            new_node = Node((row, col), parent=current_node)
            new_node.g = current_node.g + 1
            new_node.h = calculate_distance(new_node.position, end_node.position)
            new_node.f = new_node.g + new_node.h

            heapq.heappush(open_list, new_node)

    return None

# A BREIF ABOUT A * ALGORITHM

The A* algorithm is a popular pathfinding algorithm used to find the shortest path between two nodes in a graph. It combines the Dijkstra's algorithm, which explores all possible paths, and a heuristic function that guides the search towards the goal.

# ABOUT AOVE EXAMPLE CODE

In the example code, we have a grid-based implementation of A*. The Node class represents a node in the graph, containing its position, parent, and values for the cost g, heuristic h, and total estimated cost f. The calculate_distance function is a heuristic function that calculates the Euclidean distance between two points.

The a_star function takes a grid, start position, and end position as input. It initializes the open list, closed set, start node, and end node. The algorithm then iteratively expands nodes, calculating their costs and adding them to the open list. The open list is a priority queue sorted by the total estimated cost f.

# FINAL OUTCOME OF A* ALGORITHM
If the goal node is reached, the function constructs the path from the end node back to the start node and returns it. If the open list is empty and no path is found, the function returns None.

# DIFFERENT APPROACH
You can use the algorithm as follows:

grid = [
    [0, 0, 0, 0, 0],
    [0, 1, 1, 0, 0],