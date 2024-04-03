def serialize(nums, slow, fast):
    """Serialize the array and pointers for visualization."""
    formatted = {
        "kind": {"grid": True},
        "rows": [
            {
                "columns": [
                    {"content": str(value), "tag": str(value)}
                    if value != slow and value != fast
                    else {"content": f"{value} ({'S' if value == slow else 'F'})", "tag": str(value)}
                    for value in nums
                ],
            }
        ],
    }
    return formatted


def findDuplicate(nums):
    # Initialize slow and fast pointers
    slow = nums[0]
    fast = nums[0]

    # Move pointers until they meet
    while True:
        slow = nums[slow]  # Move one step
        fast = nums[nums[fast]]  # Move two steps
        if slow == fast:
            break

    # Reset one pointer to the start
    slow = nums[0]

    # Move both pointers until they meet again
    while slow != fast:
        slow = nums[slow]
        fast = nums[fast]

    # Return the duplicate number
    return slow


nums = [1, 3, 4, 2, 2]

# Serialize initial state
serialized = serialize(nums, None, None)

# Use a breakpoint to visualize the algorithm
duplicate = findDuplicate(nums)

# Serialize final state
serialized = serialize(nums, None, None)
