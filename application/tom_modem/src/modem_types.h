
#ifndef _MODEM_TYPES_H_
#define _MODEM_TYPES_H_

//options
#define AT_CMD_S 'c'
#define TTY_DEV_S 'd'
#define BAUD_RATE_S 'b'
#define DATA_BITS_S 'B'
#define PARITY_S 'P'
#define STOP_BITS_S 'S'
#define FLOW_CONTROL_S 'F'
#define TIMEOUT_S 't'
#define OPERATION_S 'o'
#define DEBUG_S 'D'
#define SMS_PDU_S 'p'
#define SMS_INDEX_S 'i'

#define AT_CMD_L "at_cmd"
#define TTY_DEV_L "tty_dev"
#define BAUD_RATE_L "baud_rate"
#define DATA_BITS_L "data_bits"
#define PARITY_L "parity"
#define STOP_BITS_L "stop_bits"
#define FLOW_CONTROL_L "flow_control"
#define TIMEOUT_L "timeout"
#define OPERATION_L "operation"
#define DEBUG_L "debug"
#define SMS_PDU_L "sms_pdu"
#define SMS_INDEX_L "sms_index"

//operations
#define AT_OP_S 'a'
#define AT_OP_L "at"
#define SMS_READ_OP_S 'r'
#define SMS_READ_OP_L "sms_read"
#define SMS_SEND_OP_S 's'
#define SMS_SEND_OP_L "sms_send"
#define SMS_DELETE_OP_S 'd'
#define SMS_DELETE_OP_L "sms_delete"

#define SET_READ_STORAGE "AT+CPMS=\"%s\""
#define SET_PDU_FORMAT "AT+CMGF=0"
#define READ_ALL_SMS "AT+CMGL=4"
#define SEND_SMS "AT+CMGS=%d"
#define DELETE_SMS "AT+CMGD=%d"

#define SMS_BUF_SIZE 16384
#define LINE_BUF 1024
#define SMS_LIST_SIZE 128
#define COMMON_BUF_SIZE 1024
#define PHONE_NUMBER_SIZE 64
#define SMS_TEXT_SIZE 256
#define SMS_PDU_STR_SIZE 512
#define SMS_PDU_HEX_SIZE 512

// at_tool profile
typedef struct _PROFILE {
    // AT command
    // TTY device
    // Baud rate
    // Data bits
    // Parity
    // Stop bits
    // Flow control
    // Timeout
    // operation
    // debug mode
    char *at_cmd;
    char *tty_dev;
    int baud_rate;
    int data_bits;
    char *parity;
    int stop_bits;
    char *flow_control;
    int timeout;
    int op;
    int debug;
    char *sms_pdu;
    int sms_index;
} PROFILE_T;

typedef struct _SMS {
    int sms_index;
    int sms_lenght;
    int ref_number;
    int segment_number;
    int timestamp;
    int total_segments;
    int type;
    char *sender;
    char *sms_text;
    char *sms_pdu;
} SMS_T;

enum SMS_CHARSET {
    SMS_CHARSET_7BIT,
    SMS_CHARSET_UCS2
}; 

enum OPTIONS {
    AT_CMD,
    TTY_DEV,
    BAUD_RATE,
    DATA_BITS,
    PARITY,
    STOP_BITS,
    FLOW_CONTROL,
    TIMEOUT,
    OPERATION,
    DEBUG,
    SMS_PDU,
    SMS_INDEX
};

enum OPERATIONS {
    NULL_OP,
    AT_OP,
    SMS_READ_OP,
    SMS_SEND_OP,
    SMS_DELETE_OP
};


#endif