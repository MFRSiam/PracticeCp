use std::io;



fn main() {
    let mut var_X :i64 = 0;
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed");
    let n :i64 = input.trim().parse().expect("Failed To Parse Input Not an Int");

    input.clear();
    for i in 0..n {
        io::stdin().read_line(&mut input).expect("Failed To read Input");
        input = input.trim().to_string();
        if input.chars().nth(1).unwrap() == '+' {
            var_X = var_X + 1;
        }else {
            var_X = var_X - 1;
        }
        input.clear();
    }
    println!("{var_X}");
}
