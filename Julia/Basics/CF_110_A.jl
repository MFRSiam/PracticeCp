
# Not Working Properly
function solve()
    x = readline()
    counter = 0
    for i in x
        j = i - '0'
        if j==4 || j==7
            counter += 1
        end
    end
    y = parse(string,counter)
    lucky = true
    for i in y
        if i!= '4' && c!='7'
            lucky = false
            break
        end
    end
    if lucky
        println("YES")
    else
        println("NO")
    end
end

solve()