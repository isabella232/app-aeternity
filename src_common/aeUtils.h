#include "os.h"
#include "cx.h"

typedef enum rlpTxType {
    TX_TYPE = 0,
    TX_SENDER,
    TX_RECIPENT,
    TX_AMOUNT,
    TX_FEE
} rlpTxType;

unsigned char encodeBase58(unsigned char WIDE *in, unsigned char length,
                           unsigned char *out, unsigned char maxoutlen);

void getAeAddressStringFromKey(cx_ecfp_public_key_t *publicKey, uint8_t *address);

void getAeAddressStringFromBinary(uint8_t *publicKey, uint8_t *address);

void parseTx(char *address, char *amount, char *fee, uint8_t *data);
