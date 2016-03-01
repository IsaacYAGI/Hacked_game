var_n = 1;
var_a = 0;

while input.lenght > 0{
	if input.pop == 1{
		var_a = var_a + var_n;
	}
	var_n = var_n * 2;
}
return var_a;