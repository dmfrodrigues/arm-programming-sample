.text
.global	euclidean
.type	euclidean,"function"
euclidean:	FSUB	D0, D0, D2
			FMUL	D0, D0, D0
			FSUB	D1, D1, D3
			FMADD	D0, D1, D1, D0
			FSQRT	D0, D0
			RET
