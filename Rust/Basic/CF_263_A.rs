use std::io;

struct Tracker{
    x:i64,
    y:i64
}


// Not Working
fn main() {
    let mut inputStream = String::new();
    let mut martix = [[0 as i32; 5] ; 5];
    let mut t = Tracker{x:0,y:0};
    for i in 0..4 {
        for j in 0..4 {
            io::stdin().read_line(&mut inputStream).expect("Failed");
            inputStream = inputStream.trim().to_string();
            martix[i][j] = inputStream.parse().unwrap();
            if martix[i][j] == 1 {
                t.x = i64::try_from(i).ok().unwrap();
                t.y = i64::try_from(j).ok().unwrap();
            }
            inputStream.clear();
        }
    }

    let diff = (2-t.x).abs() + (2-t.y).abs();
    println!("{}",diff);

}
