set xlabel 'N' ; set ylabel 'Diff %'
set term pdf; set out "fig.pdf"
plot 'datos.txt' w l t 'Diferencia porcentual'