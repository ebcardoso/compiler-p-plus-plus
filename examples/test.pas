var x, y = "breno", z = (8 + k)
const a = 7, b = "breno"
var c = "compiler", d = (3+x*3)

procedure varrer()
	function fatorial(x)
		var fat = 1
	begin
		for i = x downto 2 do
			fat = fat * i;
		return x
	end

	function fatorial2(y)
		var fat = 1, x
	begin
		x = y;
		loop
			fat = fat * x;
			x = x - 1;
			exit when(x == 1);
		end;
		return x
	end
begin

end

function delta(a, b, c)
	var del, raiz
begin
	del = b*b - 4*a*c;
	if (!del < 0) then
		raiz = sqrt(del);
		return del+0
	else
		break
end

function printNOME(a)
begin
	switch(a)
	begin
		case "Breno":
			a = b+3;
			break
		case "Lucas":
			a = b+4;
			break
		case "Renato":
			a = b+5;
			break
		case "Sidemar":
			a = b+6;
			break
	end
end