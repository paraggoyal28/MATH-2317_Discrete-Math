import numpy as np
def permutations(iterable, r=None):
    pool = tuple(iterable)
    n = len(pool)
    r = n if r is None else r
    if r > n:
        return
    indices = range(n)
    cycles = range(n, n-r, -1)
    yield tuple(pool[i] for i in indices[:r])
    while n:
        for i in reversed(range(r)):
            cycles[i] -= 1
            if cycles[i] == 0:
                indices[i:] = indices[i+1:] + indices[i:i+1]
                cycles[i] = n - i
            else:
                j = cycles[i]
                indices[i], indices[-j] = indices[-j], indices[i]
                yield tuple(pool[i] for i in indices[:r])
                break
        else:
            return


perms = permutations('MISSISSIPPI')


# Only list soluti
perm_list = []

for i in perms:
    perm_list.append("".join(i))

final_array = np.sort(np.asarray(list(set(perm_list))))


dictionary = open("permutation_dictionary.txt", "w")
dictionary.write("Word" + "\n")
for word in final_array:
    dictionary.write(word + "\n")

dictionary.close()


#########################
# After getting the file, open terminal and do the following
#
# awk -F'\t' -v OFS='\t' 'NR == 1 {print "ID", $0; next}{print (NR-1), $0}' permutation_dictionary.txt > final_dictionary.txt
# grep 'MISSISSIPPI' final_dictionary.txt
# The first column of the result is the result :)
#########################
