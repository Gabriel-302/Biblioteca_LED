# Biblioteca LED readme

Esta é uma biblioteca leve que contém funções próprias para LED com arduíno e ESP32.

A classe `LED` serve para controle não bloqueante de um LED, permitindo:

- Acender o LED continuamente
- Acender o LED por tempo definido
- Apagar o LED
- Alternar estado
- Piscar
- Piscar com determinada frequência
- Piscar com determinada frequência e quantidades
- Retornar o valor do LED instanciado.
- Atualizar a lógica interna da classe e escreve o pino.

O funcionamento não bloqueante usa o `millis()`.
Com isso, a função `update()` deve ser chamado dentro do `loop()`.

## Estrutura da biblioteca

```text
Led/
├── examples/
├── src/
│    ├─ LED.cpp
│    └─ LED.h
├── README.md
├── library.json
└── license