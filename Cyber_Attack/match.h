if mod(input.lenght,2) != 0{ //Si la cantidad de parentesis no es par, no están completos
	return false;
}else{
	var_i = 0;
	while input.lenght > 0 && var_i < input.lenght{		
		if input[var_i] != "("{
			var_i++;
		}else{
			var_j = var_i + 1;
			var_e = false;
			while var_j < input.lenght && !var_e{
				if input[var_j] == ")"{
					input.remove(var_i);
					input.remove(var_j - 1);
					var_e = true;
				}else{
					var_j++;
				}
			}
			if !var_e{
				var_i++;
			}
		}
	}
}
return input.lenght == 0;

