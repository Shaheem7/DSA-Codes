class Item:
    
    def __init__(self) -> None:
        print("class initiated...")
        

i1 = Item()
i2 = Item()    
    
    
i1.name = "Apple"
i1.price = 40
i1.quantity = 12

i2.name = "Banana"
i2.price = 5
i2.quantity = 60

print(i1.name, i1.price, i1.quantity)
print(i2.name, i2.price, i2.quantity)



