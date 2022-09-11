use std::io;



fn main() {
    let mut x = String::new();
    io::stdin().read_line(&mut x).expect("FAILED");
    let mut counter :i64 =  0;
    for c in x.trim().chars(){
        let i =  c.to_digit(10).unwrap() ;
        if i == 4 || i == 7 {
            counter = counter + 1;
        }
    }
    let mut y = counter.to_string();
    let mut lucky = true;
    for c in y.chars(){
        if c != '4' &&  c != '7' {
            lucky = false;
            break;
        }
    }
    if lucky {
        println!("YES");
    }else{
        println!("NO")
    }
}
