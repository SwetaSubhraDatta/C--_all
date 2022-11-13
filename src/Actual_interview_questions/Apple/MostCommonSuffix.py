def mostcommon_suffix(s_list:list)->str:
    #find the most common suffix
    res=""
    if(len(s_list)==0):
        return ""
    if(len(s_list)==1):
        return s_list[0]
    
    #reverse every string in the list
    s_list=[s[::-1] for s in s_list]
    first=s_list[0]
    for i in range(len(first)):
        for s in s_list:
            if (i==len(s) or (s[i]!=first[i])):
                return res[::-1]
        res+=first[i]
    return None
   

if __name__ == '__main__':
    print (mostcommon_suffix(['abcdef','bcdef','g','def','cdef','defdef']))
