<h1>Ejercicio Call Center</h1>
Se desea hacer una aplicación para un operador de Call Center para registrar la toma de pedidos 
de una empresa que comercializa hielo de agua en 2 presentaciones:
<p>bolsa de 2Kg</p>
<p>bolsa de 1'Kg</p>
<p>Además de pedir producto, los clientes pueden hacer pedidos de service de las heladeras que 
la empresa les alquila para la conservación del mismo. </p>
<p>En un pedido, el cliente pide un producto o un service, no ambos.</p>
Por cada pedido , el operador del call center deberá ingresar:
<p>Código de Cliente (alfanumérico de 8 posiciones).</p>
<p>Código de producto (1 ó 2 para la bolsa de 2 y 10 Kg. respectivamente, ó 3 para pedido de 
service).</p>
<p>Cantidad de producto en bolsas (número entero). Ingresar sólo para pedido de producto (se 
considera cantidad siempre = 1 para pedido de service).</p>
<p>Día de entrega/visita ( 1 a 6, siendo 1=Lunes).</p>
El precio del hielo de agua es un precio base por Kg. De $ 50. Hay una escala de descuentos por 
cantidad de kilos, que es la siguiente:
<p>1 a 100 Kg. 10%</p>
<p>Más de 100 Kg. 25%</p>
<p>El precio base del service es de $ 500.</p>
<p>Se conoce el stock en kilos del hielo de agua al comienzo del proceso, y es de Kg. 2000.</p>
<p>De cada pedido de producto, si hay stock suficiente, se deberá informar: Número de pedido y el 
pedido valorizado. Si no hay stock, el sistema no tomará dicho pedido y emitirá un cartel indicando 
“No se registró pedido”. De cada pedido de service se deberá informar también Nro. de pedido y 
el pedido valorizado. Número de pedido será un número secuencial a partir de 1, para numerar 
todos los pedidos.</p>
<p>Para calcular la valorización de los pedidos, hacer una función, que, dado el tipo de pedido, el 
precio base y la cantidad solicitada, devuelva el valor total del pedido. Nota: Esta función tiene 
que ser utilizada para cualquier pedido.</p>
<p>Hacer una función para mostrar, por cada pedido: Número y valor del pedido.
El programa termina cuando el operador indica que desea cerrar su turno (Desea cerrar el turno, 
“SI/NO”?) de call center.</p>
<p>Al final del turno del operador, se deberá mostrar el valor total de todos los pedidos y la cantidad 
de pedidos de service solicitados para un sábado. Considerar que los datos vienen validados</p>
