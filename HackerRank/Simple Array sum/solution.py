output = 0
count = int(input())
value = (input())
var = input()
if var != "":
    value = value+" "+var

lt = value.split()
print(lt)
while count > 0:
    count -= 1
    output += int(lt[count])
print(output)
