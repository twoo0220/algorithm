use std::io;

fn main() {
    let mut a = String::new();
    io::stdin()
    .read_line(&mut a);

    let a: u32 = match a.trim().parse(){
        Ok(num) => num,
        Err(_) => 10,
    };

    let mut b = String::new();
    io::stdin()
    .read_line(&mut b);

    let b: u32 = match b.trim().parse(){
        Ok(num) => num,
        Err(_) => 0,
    };

    print!("{}", a*b);
}
