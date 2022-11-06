/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** flags
*/

#ifndef FLAGS_H_
    #define FLAGS_H_

    /**
     * @brief Parsed conversion specifier.
     */
    typedef struct s_flags {
        int flags;
        int converter;
        int width;
        int precision;
    } t_flags;

    #define F_ALT           (1 << 0) // #
    #define F_ZEROS         (1 << 1) // 0
    #define F_BlANKS        (1 << 2) // -
    #define F_POS           (1 << 3) // ' '
    #define F_SIGN          (1 << 4) // +

    #define L_CHAR          (1 << 5) // hh
    #define L_SHORT         (1 << 6) // h
    #define L_LONGLONG      (1 << 7) // ll
    #define L_LONG          (1 << 8) // l
    #define L_LONG_DOUBLE   (1 << 9) // L
    #define L_INTMAX        (1 << 10) // j
    #define L_SIZE          (1 << 11) // z
    #define L_PTRDIFF       (1 << 12) // t

    #define C_INT           (1 << 0) // d
    #define C_INT_ALT       (1 << 1) // i
    #define C_OCTAL         (1 << 2) // o
    #define C_UINT          (1 << 3) // u
    #define C_HEX           (1 << 4) // x
    #define C_HEX_UPPER     (1 << 5) // X
    #define C_D_EXP         (1 << 6) // e
    #define C_D_EXP_UPPER   (1 << 7) // E
    #define C_D_DEC         (1 << 8) // f
    #define C_D_DEC_UPPER   (1 << 9) // F
    #define C_D_AUTO        (1 << 10) // g
    #define C_D_AUTO_UPPER  (1 << 11) // G
    #define C_D_HEX         (1 << 12) // a
    #define C_D_HEX_UPPER   (1 << 13) // A
    #define C_BIN           (1 << 14) // b
    #define C_CHAR          (1 << 15) // c
    #define C_STR           (1 << 16) // s
    #define C_STR_OCT       (1 << 17) // S
    #define C_PTR           (1 << 18) // p
    #define C_COUNT         (1 << 19) // n
    #define C_PERCENT       (1 << 20) // %

#endif /* !FLAGS_H_ */
