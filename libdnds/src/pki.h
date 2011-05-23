#ifndef DNDS_PKI_H
#define DNDS_PKI_H 1

#include <stdbool.h>
#include <stdint.h>

#include <openssl/ssl.h>

typedef struct digital_id {

	char *commonName;
	char *countryName;
	char *stateOrProvinceName;
	char *localityName;
	char *emailAddress;
	char *organizationName;
} digital_id_t;

typedef struct embassy {

	X509 *certificate;
	EVP_PKEY *keyring;
	uint32_t serial;
} embassy_t;

typedef struct passport {

	X509 *certificate;
	EVP_PKEY *keyring;
	X509_STORE *trusted_authority;
} passport_t;

void pki_init();
uint32_t pki_expiration_delay(uint8_t years);
digital_id_t *pki_digital_id(char *commonName,
				char *countryName,
				char *stateOrProvinceName,
				char *localityName,
				char *emailAddress,
				char *organizationName);

void pki_free_digital_id(digital_id_t *digital_id);

void pki_embassy_free(embassy_t *embassy);
embassy_t *pki_embassy_new(digital_id_t *digital_id, uint32_t expiration_delay);

void pki_passport_free(passport_t *passport);
passport_t *pki_embassy_deliver_passport(embassy_t *embassy, digital_id_t *digital_id, uint32_t expiration_delay);

passport_t *pki_passport_load_from_memory(char *certificate, char *privatekey, char *trusted_authority);
passport_t *pki_passport_load_from_file(char *certificate_filename,
					char *privatekey_filename,
					char *trusted_authority_filename);

#endif // DNDS_PKI_H