def FindCubesInDictionary(num):
    Cubes = {} # Empty Dictionary 
    i=1
    while i <= num:
        Cubes[i] = i * i * i 
        i=i+1
    return Cubes

Cubes =  FindCubesInDictionary(5)
#print(type(Cubes))
print(Cubes)
