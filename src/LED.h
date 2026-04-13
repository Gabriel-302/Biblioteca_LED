#ifndef LED_h
#define LED_h

#include <Arduino.h>

/**
 * @class LED
 * @brief Classe para controle não bloqueante de um LED.
 *
 * Permite ligar, desligar, ligar por um tempo,
 * piscar continuamente e piscar por quantidade definida.
 *
 * @note O método update() deve ser chamado continuamente dentro do loop().
 */
class LED
{
private: //*normalmente atributos
    uint8_t pino;
    bool estado;

    bool apagarNoTempo;
    uint32_t apagarNoMomento;
    bool estadoPiscar;

    uint32_t tempoEspera;
    uint32_t tempoAnteriorPiscar;
    uint16_t repeticoes;

    /**
     * @brief Processa o desligamento temporizado.
     */
    void funcaoApagarNoTempo();
    /**
     * @brief Processa a lógica de piscada do LED.
     */
    void funcaoPiscar();

public:

/**
 * @brief Constroí um objeto LED.
 * @param pin Número do pino digital onde o LED está conectado.
 */
    LED(uint8_t pin);

    /**
     * @brief Liga o LED continuamente.
     */
    void acender();
    /**
     * @brief Liga o LED por um tempo determinado.
     * @param tempoLigado Tempo, em milissegundos, que o LED ficará ligado.
     */
    void acender(uint32_t tempoLigado);

    /**
     * @brief Desliga o LED e cancela modos automáticos.
     */
    void apagar();

    /**
     * @brief Liga e desliga o LED continuamente.
     */
    void piscar();
    /**
     * @brief Liga e desliga o LED com uma frequência determinada.
     * @param freq Frequência, em Heartz, que o LED piscará.
     */
    void piscar(float freq);
    /**
     * @brief Liga e desliga o LED com uma frequência determinada
     * @param freq Frequência, em Heartz, que o LED piscará.
     * @param repeticoes Número de vezes que o LED piscará.
     */
    void piscar(float freq, uint16_t repeticoes);

    /**
     * @brief Altera o estado do LED entre ligado e desligado.
     */
    void alternar();

    /**
     * @brief Define manualmente o estado do LED.
     * @param estado true para ligado, false para desligado
     */
    void setEstado(bool estado);

    /**
     * @brief Retorna o valor do LED instanciado.
     * @note Muito importante quando não sabe o valor do pino.
     */
    uint8_t getPino();

    /**
     * @brief Atualiza a lógica interna da classe e escreve o pino.
     * @note Deve ser chamado repetidamente dentro da função loop().
     */
    void update();
};

#endif