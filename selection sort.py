def ssort(lst):
    l1 = len(lst);
    for i in range(0,l1):
        mini = 100000;
        sub = 0;
        for j in range(i,l1):
            if lst[j] < mini:
                sub = j;
                mini = lst[j];
        t = lst[i];
        lst[i] = lst[sub];
        lst[sub] = t;
    return;

lst = [30,21,5,7,1];
ssort(lst);
print (lst);