procedure mergeSort(vetor, posicaoInicio, posicaoFim)
	var i, j, k, metadeTamanho, vetorTemp;
	var vetorTemp;
begin
	if (posicaoInicio == posicaoFim) then
		return 0;

	metadeTamanho = (posicaoInicio + posicaoFim ) / 2;
	mergeSort(vetor, posicaoInicio, metadeTamanho);
	mt1 = metadeTamanho + 1;
	mergeSort(vetor, mt, posicaoFim);

	i = posicaoInicio;
	j = metadeTamanho + 1;
	k = 0;

	loop
		exit when ( i >= metadeTamanho + 1 && j >= posicaoFim + 1 );
		if (i == metadeTamanho + 1 ) then
			begin
				vetorTemp[k] = vetor[j];
				j = j + 1;
				k = k + 1
			end
		else
			begin
				if (j == posicaoFim + 1) then
					begin
						vetorTemp[k] = vetor[i];
						i = i + 1;
						k = k + 1
					end
				else
					begin
						if (vetor[i] < vetor[j]) then
							begin
								vetorTemp[k] = vetor[i];
								i = i + 1;
								k = k + 1
							end
						else
							begin
								vetorTemp[k] = vetor[j];
								j = j + 1;
								k = k + 1
							end
					end
			end
	end;

	for i = posicaoInicio to posicaoFim do 
	begin
		vetor[i] = vetorTemp[i - posicaoInicio]
	end
end
