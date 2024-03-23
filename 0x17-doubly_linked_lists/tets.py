#!/usr/bin/python3

def is_palindrome(text):
    return text == text[::-1]
high = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        res = str(i * j);
        if is_palindrome(res):
            res = int(res)
            if res > high:
                high = res
print(high)
