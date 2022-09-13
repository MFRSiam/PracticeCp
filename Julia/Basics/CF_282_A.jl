
function solve()
    var_x = 0

    n = parse(Int,readline())
    while n > 0
        operation_code = readline()
        if operation_code[2] == '+'
            var_x += 1
        else
            var_x -= 1
        end
        n -= 1
    end
    println("$var_x")
end

solve()