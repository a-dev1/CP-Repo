def sanitize_list(li):
    for i in li:
        if i not in list:
            list.append(i)
    return list

li = [1, 2, 3, 1, 2, 4, 5, 4 ,6, 2]

print("List Before ", li)

list = []
li = sanitize_list(li)

print("List After removing duplicates ", li)
