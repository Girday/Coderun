def identify(args: list) -> str:
    if len(set(args)) == 1:
        return "CONSTANT"
    
    ST = "START"
    AS = "ASCENDING"
    DS = "DESCENDING"
    W = "WEAKLY"
    WAS = "WEAKLY ASCENDING"
    WDS = "WEAKLY DESCENDING"
    R = "RANDOM"

    state = ST
    for i in range(len(args) - 1):
        x, y = a[i], a[i + 1]
        if state == ST:
            if x < y:
                state = AS
            elif x > y:
                state = DS
            elif x == y:
                state = W
            continue
        if state == AS:
            if x < y:
                state = AS
            elif x == y:
                state = WAS
            elif x > y:
                state = R
            continue
        if state == DS:
            if x > y:
                state = DS
            elif x == y:
                state = WDS
            elif x < y:
                state = R
            continue
        if state == W:
            if x < y:
                state = WAS
            elif x > y:
                state = WDS
            elif x == y:
                state = W
            continue
        if state == WAS:
            if x < y:
                state = WAS
            elif x == y:
                state = WAS
            elif x > y:
                state = R
            continue
        if state == WDS:
            if x > y:
                state = WDS
            elif x == y:
                state = WDS
            elif x < y:
                state = R
            continue

    return state


a = []
while (n := int(input())) != -2 * 10 ** 9:
    a.append(n)

print(identify(a))
