def solution(s):
    arr = ['zero','one','one','two','three','four','five','six','seven','eight','nine']
    temp = ""
    result = ""

    for i in range(len(s)):
        c = s[i]
        if(c.isnumeric()):
           result += c
        else:
            temp += c

            if temp in arr:
                result+=str(arr.index(temp))
                temp = ""
    return int(result)