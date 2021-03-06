#ifndef _SOURCE_CURRENCY_LIB_CALLS_H_
#define _SOURCE_CURRENCY_LIB_CALLS_H_

// return 1 if the address match, 0 is not match,
// other values in case of error
int check_address(
    unsigned char* coin_config,
    unsigned char coin_config_length,
    unsigned char* address_parameters,
    unsigned char address_parameters_length,
    char * application_name,
    char * address_to_check,
    char * address_extra_id_to_check);

void create_payin_transaction(
    unsigned char* coin_config,
    unsigned char coin_config_length,
    char * application_name,
    unsigned char * amount,
    unsigned char amount_size,
    char * payin_address,
    char * payin_address_extra_id);

int get_printable_amount(
    unsigned char* coin_config,
    unsigned char coin_config_length,
    char * application_name,
    unsigned char * amount,
    unsigned char amount_size,
    char* printable_amount,
    unsigned char printable_amount_size);

#endif // _SOURCE_CURRENCY_LIB_CALLS_H_