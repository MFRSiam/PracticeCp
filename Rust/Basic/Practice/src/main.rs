use std::io;



fn main() {
    let mut name1 = String::new();
    let mut name2 = String::new();
    io::stdin().read_line(&mut name1).expect("Failed");
    io::stdin().read_line(&mut name2).expect("Failed");
    name1.trim().to_string();
    name2.trim().to_string();
    println!("{name1}::{name2}")

}
