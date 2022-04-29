def swap(list, i, j):
    t = list[i]
    list[i] = list[j]
    list[j] = t


def func(list, i, n):
    j = 0
    temp = 0
    if j == n:
        for j in range(0, n+1):
            print(list[j])
        print(" ")
    else:
        for j in range(i, n+1):
            swap(list, i, j)
            func(list, i+1, n)
            swap(list, i, j)


func(['a', 'b', 'c'], 0, 2)