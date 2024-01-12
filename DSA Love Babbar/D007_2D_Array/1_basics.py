two_d = [[1,2,3,6],[4,5,6,7],[7,8,9,8]]



def colsum(two_d):
    
    for col in range(4):
        sum=0
        for row in range(3):
            sum += two_d[row][col]
        
        print(sum)       
    
def rowsum(two_d):
    for row in range(3): 
        sum = 0
        for col in range(4):
            sum+=two_d[row][col]
            
        print(sum)
        
        
def l_search(two_d, key):
    for row in range(len(two_d)):
        for col in range(len(two_d[0])):
            if key == two_d[row][col]:
                print(f"Key found at :row={row},col={col}")
            # else:
            #     print('Key not found')
        
        

    
    
print("Column sums:")
colsum(two_d)
print("row sums:")
rowsum(two_d)

l_search(two_d, key=7)