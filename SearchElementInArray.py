import array as arr
vals = arr.array('i',[])

arr_Length  = int(input("\nEnter Length of Array "))
i = 0
for i in range(arr_Length):
    arr_Element = int(input("\nEnter Next Array Element "))
    vals.append(arr_Element)


def search_In_Array(arr,arr_Length,num):
    #print(arr_Length)
    j = 0
    for j in range(arr_Length):
        #print(vals[j])
        if vals[j] == num:
            return True
    return False

print("\n"+ str(vals))
num = 78
if search_In_Array(vals,arr_Length,num) == True:
    print(str(num) + " Found in Array")
else:
    print(str(num) + " Not Found in Array")

