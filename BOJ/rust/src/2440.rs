fn main() {
    let mut input_string = String::new();
    std::io::stdin().read_line(&mut input_string).expect("Wrong input");
    let mut count: i32 = input_string.trim().parse().expect("Not Number");
    
    loop {
        if count < 0
        {
            break;
        }
        
        let mut i = count;
        loop {
            if i < 1
            {
                break;
            }
            print!("*");
            i -= 1;
        }
        print!("\n");
        count -= 1;
    }
}
