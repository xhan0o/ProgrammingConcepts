def isPali(string):
    l = len(string)
    for i in range(0,l/2):
        if string[i] != string[l-i-1]:
            return False
    return True

def rev(string):
    return string[: : -1]
def isPali_v2(string):
    rstring = rev(string)
    if rstring == string : return True
    return False

string = "ABa"
print isPali_v2(string.lower())
#print rev(string)
