# Initialize distances between nodes
distances = {"A": {"B": 2, "C": 5}, "B": {"A": 2, "C": 3}, "C": {"A": 5, "B": 3}}

# Function to calculate minimum distances
def calculate_minimum_distances(node):
    # Initialize minimum distances
    minimum_distances = {}

    # Loop through all nodes
    for n in distances:
        # If current node is not the starting node
        if n != node:
            # Initialize minimum distance
            min_distance = float("inf")

            # Loop through neighbors of starting node
            for neighbor in distances[node]:
                # Calculate distance to current node through neighbor
                distance = distances[node][neighbor] + distances[neighbor][n]

                # If calculated distance is less than current minimum, update minimum distance
                if distance < min_distance:
                    min_distance = distance

            # Add minimum distance to dictionary
            minimum_distances[n] = min_distance
            
    # Return minimum distances
    return minimum_distances


# Example usage
print(calculate_minimum_distances("A"))  # should return {"B": 2, "C": 3}
print(calculate_minimum_distances("B"))  # should return {"A": 2, "C": 3}
print(calculate_minimum_distances("C"))  # should return {"A": 5, "B": 3}
