# # n=int(input())
# # if(n==0):
# #     print(1)
# # if(n==1):
# #     print(1,1)
# # else:
# #     print(1,1,end=" ")

# # a=1 
# # b=1
# # for i in range(2,n+1):
# #     c=a+b 
# #     print(c,end=" ")
# #     a=b 
# #     b=c

# n=int(input())
# if(n<=1):
#     print("NO")
# else:
#     for i in range(2,n):
#         if(n%i==0):
#             print("NO")
#             break 
#     else:
#         print("YES")

n=int(input())
# for i in range(1,n+1):
#     for j in range(1,n+1):
#         print('*',end=" ")
#     print()
for i in range(n):
    for j in range(i+1):
        print('*',end=" ")
    print()