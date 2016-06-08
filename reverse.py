def get(s):
    if len(s) <= 1:
        return s
    return get(s[1:]) + s[0]
print(get('program'))
