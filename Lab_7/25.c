1.procedure: push[s,top,x]

    1.[check for stack overflow]
        if Top >= n
            then write ('stack is overflow')
            return
    2.[incremrnt Top]
        Top = Top + 1
    3.[insert value]
        s[top] = x
    4.[finished]
        return

2.function pop[s,top]

    1.[check for underflow]
        if Top == -1
            then write('stack is underflow')
            return(0)
    2.[decrement Top]
        Top = Top - 1
    3.[return top element value]
        return(s[top+1])


3.function peep[s,top,i]

    1.[check for underflow]
        if Top-i+1 <= 0
            then write('stack is underflow')
            return(0)
    2.[return ith element value form top of stack]
        return(s[Top-i+1])


4.procedure change[s,Top,x,i]

    1.[check for underflow]
        if Top-i+1 <= 0
            then write('stack is underflow')
            return
    2.[change element at ith index]
        s[Top-i+1] = x
    3.finished
        return