def algo(in_string):
    vowels = ('a','e','i','o','u')
    for c in in_string.lower():
        if c in vowels:
            in_string = in_string.replace(c,"")
    print(in_string)



#Driver program
string = "leetcodeisacommunityforcoders"
algo(string)