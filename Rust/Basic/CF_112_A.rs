use std::io;



fn main() {
    let mut name1 = String::new();
    let mut name2 = String::new();
    io::stdin().read_line(&mut name1).expect("Failed");
    io::stdin().read_line(&mut name2).expect("Failed");
    name1 = name1.trim().to_string().to_lowercase();
    name2 = name2.trim().to_string().to_lowercase();
    // println!("{name1}::{name2}")
    if name1 > name2 {
        println!("1");
    }else if name1 < name2 {
        println!("-1");
    }else {
        println!("0");
    }
}
