# Define a function that takes a sorted list and a target value
def binary_search(lst, target):
    # Set the initial low and high indices
    low = 0
    high = len(lst) - 1
    # Loop until low is greater than high
    while low <= high:
        # Find the middle index
        mid = (low + high) // 2
        # Compare the middle element with the target value
        if lst[mid] == target:
            # Return the middle index if found
            return mid
        elif lst[mid] < target:
            # Set low to mid + 1 if target is greater than middle element
            low = mid + 1
        else:
            # Set high to mid - 1 if target is less than middle element
            high = mid - 1
    # Return -1 if not found
    return -1

# Test the function with an example list and target value
lst = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
target = 4
result = binary_search(lst, target)
print(f"The target {target} is at index {result} in the list {lst}")
