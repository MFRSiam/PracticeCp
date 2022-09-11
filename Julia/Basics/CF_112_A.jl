
# Working Solve

function solve()
    name1 = readline()
    name2 = readline()
    lowercase(name1)
    lowercase(name2)
    if(name1 > name2)
        print("1\n")
    elseif(name1 < name2)
        print("-1\n")
    else
        print("0\n")
    end
end

solve()