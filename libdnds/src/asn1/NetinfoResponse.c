/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "DNDS"
 * 	found in "dnds.asn1"
 */

#include "NetinfoResponse.h"

static int
memb_ipAddress_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 4 && size <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_netmask_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 4 && size <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_NetinfoResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NetinfoResponse, ipAddress),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_ipAddress_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ipAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NetinfoResponse, netmask),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_netmask_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"netmask"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NetinfoResponse, result),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DNDSResult,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"result"
		},
};
static ber_tlv_tag_t asn_DEF_NetinfoResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_NetinfoResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ipAddress at 153 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* netmask at 154 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* result at 155 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NetinfoResponse_specs_1 = {
	sizeof(struct NetinfoResponse),
	offsetof(struct NetinfoResponse, _asn_ctx),
	asn_MAP_NetinfoResponse_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NetinfoResponse = {
	"NetinfoResponse",
	"NetinfoResponse",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_NetinfoResponse_tags_1,
	sizeof(asn_DEF_NetinfoResponse_tags_1)
		/sizeof(asn_DEF_NetinfoResponse_tags_1[0]), /* 1 */
	asn_DEF_NetinfoResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_NetinfoResponse_tags_1)
		/sizeof(asn_DEF_NetinfoResponse_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NetinfoResponse_1,
	3,	/* Elements count */
	&asn_SPC_NetinfoResponse_specs_1	/* Additional specs */
};

