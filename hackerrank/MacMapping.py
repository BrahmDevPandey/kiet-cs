def mapMac(string):
    res = ""
    for c in string:
        if c == "E" or c == "T":
            res += "0"
        else:
            res += c
    return res;


def mapMacModified(string):
    res = ""
    mapper = {
        "E":0,
        "T":0
    }

    for c in string:
        val = str(mapper.get(c))
        if val == "None":
            res += c
        else:
            res += val
    return res


print(mapMacModified("EC:B0:8T:E4"))
