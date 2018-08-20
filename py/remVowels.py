def remVow(string):
    v = {'a', 'e', 'i', 'o', 'u'}
    for i in string.lower():
        if i in v:
            string = string.replace(i,"")
    print string
    return (string)
string = "Shantanu Patel"
remVow(string)
