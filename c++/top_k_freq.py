# import numpy as np

s = [1,2,4,4,4,5,5,5,7]
k =2
dictionary = {}
sortmax = {}
for char in s:
    dictionary[char] = dictionary.get(char, 0) + 1


while dictionary:
    get_max_char = max(dictionary, key=dictionary.get)
    sortmax[get_max_char] = dictionary[get_max_char]

    del dictionary[get_max_char]

to_list = list(sortmax.keys())
print(to_list)
top_k = to_list[:k]

print(top_k)
