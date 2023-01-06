#!/usr/bin/python3

def func(a, b, v):
    least = (v - a) // (a - b) + 1
    rest = (v - a) % (a - b)
    if rest != 0:
        least += 1
    print(least)


a, b, v = map(int, input().split())
func(a, b, v)
