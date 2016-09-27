data <- read.csv("list_vs_bst.csv", header=TRUE)

plot(data$LIST, type="o", xaxt = "n", col="red", ann=FALSE)

axis(1, at=1:5, data$VALUES)
box()

lines(data$BST, type="o", col="blue")

title(main="Lista vs Árvore de Busca Binária", col.main="blue", font.main=4)
title(xlab="Valores buscados", col.lab=rgb(0,0.5,0))
title(ylab="Comparações", col.lab=rgb(0,0.5,0))

legend(1,9.5, c("List","BST"), lty=c(1,1), lwd=c(2.5,2.5),col=c("red","blue"))
