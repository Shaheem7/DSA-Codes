
arr = [1,2,2,1,1,3]
occ = {}

def unique_values(arr):
    
    # getting unique values 
    for i in arr:
        if i in occ:
            occ[i] += 1
        else:
            occ[i] = 1
            
        

def compare_values(occ):
    count_set = set()
    for value in occ.values():
        if value in count_set:
            return False
        count_set.add(value)
        
    return True

unique_values(arr)
compare_values(occ)