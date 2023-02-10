def search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

# Test
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
target = 5
index = search(arr, target)
if index != -1:
    print("Target found at index: ", index)
else:
    print("Target not found")
