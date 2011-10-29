#ifndef _SUPPORT_H_
#define _SUPPORT_H_

/* Internal functions */
int raw_write(unsigned char *buf, int size);
int raw_read(unsigned char *buf, int size);
uint16_t freq2div(uint32_t system_clock, uint32_t freq);
uint32_t div2freq(uint32_t system_clock, uint16_t div);
void configure_default_settings(int endianess);
int next_arg(va_list args, int def);
unsigned char *build_block_buffer(uint8_t cmd, unsigned char *data, int size, int *buf_size);

#endif