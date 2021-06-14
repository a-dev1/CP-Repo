# matrix = [[11, 12, 5], [15, 6,10], [10, 8, 5]]

# for i in range(0, len(matrix)):
#   for j in range(0, len(matrix[i])):
#     if i == 0 and j == 0:
#       print("[", end="")

#     if j == 0:
#       print("[", end="")
      
#     print(matrix[i][j], end=" ")

#     if i == 2 and j == 2:
#       print("]", end="")

#     if j == 2:
#       print("]")


#     if j == 2:
#       print(end="")


# SUM OF MATRIX
# matrix1 = [[11, 12, 5], [15, 6,10], [10, 8, 5]]
# matrix2 = [[11, 12, 5], [15, 6,10], [10, 8, 5]]

# w, h = 3, 3;
# sum = [[0 for x in range(w)] for y in range(h)] 


# for i in range(0, len(matrix1)):
#   for j in range(0, len(matrix2)):
#     sum[i][j] = matrix1[i][j] + matrix2[i][j]

# print(sum)

##Initializing Logic for an 3x3 matrix
# w = 3
# sum = [[4 for x in range(w)] for y in range(w)]

# print(sum)

# def sum(*sdf):
#     print(sdf)
#     sum = 0
#     for i in sdf:
#         sum += i
#     print(sum)

# sum(2, 5, 8, 9)

#Q:- 35 31 27 23 19 23 27 31 35
# max = 35
# temp = 0

# while True:
#   print(max, end=" ")
#   if max == 19:
#     temp = 1
#   if max > 19 and temp == 0:
#     max -= 4  
#   else:
#     max += 4
#     if max == 35:
#       print(max, end="")
#       break
  
# print(len(list))

# Print the sum of digit for greater than 9
list = [1110, 6, 8, 11]
for i in range(len(list)):
  if (list[i] > 9):
    temp = list[i]
    sum = 0;
    while(temp):
      sum += (int)(temp % 10)
      temp = temp/10
    list[i] = sum

print(list)