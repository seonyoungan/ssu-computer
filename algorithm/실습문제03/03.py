def find(n1, n2, m1, m2, idx):
    if idx== len(number):
        return n1, m1
    if number[idx] == '1':
        return find(n1, (n1+n2)//2, (m1+m2)//2, m2, idx+1)
    
    elif number[idx] == '2':
        return find(n1, (n1+n2)//2, m1, (m1+m2)//2, idx+1)
    elif number[idx] == '3':
        return find((n1+n2)//2, n2, m1, (m1+m2)//2, idx+1)
    elif number[idx] == '4':
        return find((n1+n2)//2, n2, (m1+m2)//2, m2, idx+1)

def check(n1, n2, m1, m2):
    global answer
    if len(answer) == int(d):
        return answer

    if n1 <= nx < (n1+n2)//2 and (m1+m2)//2 <= ny <m2:
        answer += '1'
        return check(n1, (n1+n2) // 2, (m1+m2)//2, m2)

    elif n1 <= nx < (n1+n2)//2 and m1 <=ny < (m1+m2)//2:
        answer += '2'
        return check(n1, (n1+n2) // 2, m1, (m1+m2)//2)
    
    elif (n1+n2) //2 <= nx < n2 and (m1+m2)//2 <= ny <m2:
        answer += '4'
        return check((n1+n2)//2, n2, (m1+m2)//2, m2)
    