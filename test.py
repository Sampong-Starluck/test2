# spam = 'cat'
# print(spam+spam+spam)
# print(spam*3)

# spam = 'Four score and seven years is eighty seven years.'
# print(spam[5])
# print(spam[-3])
# print(spam[0:4] + spam[5])
# print(spam[-3:-1])
# print(spam[:10])
# print(spam[-5:])
# print(spam[:])

# message = 'Three can keep a secret, if twwo of them are dead.'
# translate = ''

# i = len(message) - 1
# while i >= 0:
#     translate = translate + message[i]
#     print('i is ',i,' , message[i] is ',message[i],', translate is ', translate)
#     i = i - 1

# print(translate)

# print(len('Hello') + len('Hello'))

# i=0
# while i < 3:
#     print('Hello')
#     i = i + 1

i = 0
spam = 'Hello'
while i < 5:
    spam = spam + spam[i]
    i = i + 1
print(spam)