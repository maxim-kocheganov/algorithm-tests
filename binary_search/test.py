# 27 page

def binary(list, item):
    low = 0
    high = len(list) - 1
    while low <= high:
        mid = (low + high)//2
        guess = list[mid]
        if guess == item:
            return mid
        if guess > item:
            high = mid - 1
        else:
            low = mid + 1
    return None

lst = [1,2,3,4,5,6,10,11]

res = binary(lst, 3)
pass